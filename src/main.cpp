#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

#include "gen/antlr/ParadoxFileLexer.h"
#include "gen/antlr/ParadoxFileParser.h"
#include "gen/antlr/ParadoxFileBaseListener.h"

class ConsoleWritingListener : public ParadoxFileBaseListener {
public:

    virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override {
        std::cout << "Found ERROR" << std::endl;
    }
};

class BuildingInfo {
public:
    BuildingInfo(std::string name) : name_(name) {}

    void setBuildTime(const std::string &value) {
        build_time_value_ = value;
        sscanf(value.c_str(), "%d", &build_time_);
    }

    const std::string& name() const {
        return name_;
    }

    int build_time() const {
        return build_time_;
    }

    const std::string& build_time_value() const {
        return build_time_value_;
    }

private:
    std::string name_;
    int build_time_;
    std::string build_time_value_;
};

class AssignmentNode {
public:
    AssignmentNode() {}

    AssignmentNode(
        const std::string &name,
        AssignmentNode* parent
    ): name_(name), parent_(parent) {}

    std::vector<AssignmentNode>& children() {
        return children_;
    }

    const std::vector<AssignmentNode>& children() const {
        return children_;
    }

    const std::string& name() const {
        return name_;
    }

    AssignmentNode* parent() const {
        return parent_;
    }
private:
    std::string name_;
    AssignmentNode* parent_;
    std::vector<AssignmentNode> children_;
};

class AssignmentListener : public ParadoxFileBaseListener {
public:
    AssignmentListener(bool quiet = true): quiet_(quiet) {}

    virtual void enterAssignment(ParadoxFileParser::AssignmentContext *ctx) override {
        current_->children().emplace_back(_get_assignment_name(ctx), current_);
        current_ = &(current_->children().back());
        if (!quiet_) {
            std::cout << indent_ << "Entering " << current_->name() << std::endl;
            indent_ = indent_ + "  ";
        }
    }

    virtual void exitAssignment(__attribute__((unused)) ParadoxFileParser::AssignmentContext *ctx) override {
        if (!quiet_) {
            indent_ = indent_.substr(0, indent_.length() - 2);
            std::cout << indent_ << "Exiting " << current_->name() << std::endl;
        }
        current_ = current_->parent();
    }

    const AssignmentNode& assignments() const {
        return root_;
    }

private:
    AssignmentNode root_;
    AssignmentNode *current_ = &root_;
    std::string indent_ = "";
    const bool quiet_;

    std::string _get_assignment_name(ParadoxFileParser::AssignmentContext *ctx) {
        if (!ctx) {
            throw new std::runtime_error("Context given is null");
        }
        if (ctx->field()) {
            return _get_assignment_name(ctx->field());
        }
        throw std::runtime_error("Unable to figure out the assignments name");
    }

    std::string _get_assignment_name(ParadoxFileParser::FieldContext *field) {
        if (field->symbol()) {
            return _get_assignment_name(field->symbol());
        }
        if (field->variable()) {
            return _get_assignment_name(field->variable());
        }
        if (field->LIST_START()) {
            return field->LIST_START()->getSymbol()->getText();
        }
        if (field->string()) {
            return _get_assignment_name(field->string());
        }
        throw std::runtime_error("Unable to figure out the name from a field");
    }

    std::string _get_assignment_name(ParadoxFileParser::SymbolContext *symbol) {
        if (symbol->string()) {
            return _get_assignment_name(symbol->string());
        }
        if (symbol->INT()) {
            return symbol->INT()->getSymbol()->getText();
        }
        if (symbol->REAL()) {
            return symbol->REAL()->getSymbol()->getText();
        }
        if (symbol->SYMBOL()) {
            return symbol->SYMBOL()->getSymbol()->getText();
        }
        throw std::runtime_error("Unable to figure out the name from a symbol");
    }

    std::string _get_assignment_name(ParadoxFileParser::StringContext *string) {
        if (string->DSTRING()) {
            return string->DSTRING()->getSymbol()->getText();
        }
        if (string->SSTRING()) {
            return string->SSTRING()->getSymbol()->getText();
        }
        if (string->CSTRING()) {
            return string->CSTRING()->getSymbol()->getText();
        }
        throw std::runtime_error("Unable to figure out the name from a string");
    }

    std::string _get_assignment_name(ParadoxFileParser::VariableContext *variable) {
        if (variable->SYMBOL()) {
            return variable->SYMBOL()->getSymbol()->getText();
        }
        if (variable->INT()) {
            return variable->INT()->getSymbol()->getText();
        }
        throw std::runtime_error("Unable to figure out the name from a variable");
    }
};

class ThrowingErrorListener: public antlr4::BaseErrorListener {
public:
    ThrowingErrorListener(const std::string& name): name_(name) {}

	virtual void syntaxError(
        __attribute__((unused)) antlr4::Recognizer *recognizer,
        __attribute__((unused)) antlr4::Token * offendingSymbol,
        size_t line,
        size_t charPositionInLine,
        __attribute__((unused)) const std::string &msg,
        __attribute__((unused)) std::exception_ptr e
    ) override {
        std::stringstream final_msg;
        final_msg << name_ << ": Syntax Error: line " << line << ", starting with character " << charPositionInLine;
        throw std::runtime_error(final_msg.str());
    }
private:
    std::string name_;
};

inline void process(const char *filename, bool debug) {
    std::cout << "Opening '" << filename << "'" << std::endl;
    std::ifstream stream;
    stream.open(filename);

    antlr4::ANTLRInputStream input(stream);
    ParadoxFileLexer lexer(&input);
    lexer.addErrorListener(new ThrowingErrorListener("Lexer"));
    antlr4::CommonTokenStream tokens(&lexer);
    ParadoxFileParser parser(&tokens);
    parser.addErrorListener(new ThrowingErrorListener("Parser"));

    antlr4::tree::ParseTree *tree = parser.config();
    if (debug) {
        std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
    }

    AssignmentListener listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    if (debug) {
        std::cout << std::endl;
    }

    if (debug) {
        for (auto x : listener.assignments().children()) {
            std::cout << x.name() << std::endl;
        }
    }
}

int main(int argc, const char* argv[]) {
    bool debug = false;
    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[i], "--debug") == 0 || strcmp(argv[i], "-d") == 0) {
            debug = true;
            continue;
        }
        try {
            process(argv[i], debug);
        } catch (std::range_error error) {
            std::cout << "************************* Error parsing '" << argv[i] << "': " << error.what() << std::endl;
        } catch (std::runtime_error error) {
            std:: cout << "************************* Error parsing '" << argv[i] << "': " << error.what() << std::endl;
        }
    }

    return 0;
}
