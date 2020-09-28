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
    AssignmentListener() {}

    virtual void enterAssignment(ParadoxFileParser::AssignmentContext *ctx) override {
        current->children().emplace_back(_get_assignment_name(ctx), current);
        current = &(current->children().back());
        std::cout << indent << "Entering " << current->name() << std::endl;
        indent = indent + "  ";
    }

    virtual void exitAssignment(ParadoxFileParser::AssignmentContext *ctx) override {
        indent = indent.substr(0, indent.length() - 2);
        std::cout << indent << "Exiting " << current->name() << std::endl;
        current = current->parent();
    }

    const AssignmentNode& assignments() const {
        return root;
    }

private:
    AssignmentNode root;
    AssignmentNode *current = &root;
    std::string indent = "";

    std::string _get_assignment_name(ParadoxFileParser::AssignmentContext *ctx) {
        if (!ctx) {
            throw new std::runtime_error("Context given is null");
        }
        if (ctx->field()) {
            auto field = ctx->field();
            if (field->symbol()) {
                auto symbol = field->symbol();
                if (symbol->STRING()) {
                    return symbol->STRING()->getSymbol()->getText();
                }
                if (symbol->INT()) {
                    return symbol->INT()->getSymbol()->getText();
                }
                if (symbol->SYMBOL()) {
                    return symbol->SYMBOL()->getSymbol()->getText();
                }
            }
            if (field->variable()) {
                auto variable = field->variable();
                if (variable->SYMBOL()) {
                    return variable->SYMBOL()->getSymbol()->getText();
                }
            }
        }
        throw new std::runtime_error("Unable to figure out the assignments name");
    }
};

int main(int argc, const char* argv[]) {
    std::cout << "Opening '" << argv[1] << "'" << std::endl;
    std::ifstream stream;
    stream.open(argv[1]);

    antlr4::ANTLRInputStream input(stream);
    ParadoxFileLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    ParadoxFileParser parser(&tokens);

    antlr4::tree::ParseTree *tree = parser.config();
    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

    AssignmentListener listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    std::cout << std::endl;

    for (auto x : listener.assignments().children()) {
        std::cout << x.name() << std::endl;
    }

    return 0;
}
