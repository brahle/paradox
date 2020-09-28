#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include "gen/antlr/ParadoxFileLexer.h"
#include "gen/antlr/ParadoxFileParser.h"
#include "gen/antlr/ParadoxFileBaseListener.h"

const char *STATIONS_FILE_NAME = "/mnt/d/Program\ Files/steamapps/common/Stellaris/common/ship_sizes/00_ship_sizes.txt";

enum ResourceType {
    MINERALS,
    ENERGY,
    ALLOYS,
    FOOD,
    CONSUMER_GOODS
};

inline ResourceType parse_resource_type(const std::string &type) {
    if (type == "minerals") return MINERALS;
    if (type == "energy") return ENERGY;
    if (type == "alloys") return ALLOYS;
    if (type == "food") return FOOD;
    if (type == "consumer_goods") return CONSUMER_GOODS;
    throw std::runtime_error("Unexepcted resource type: " + type);
}

class Trigger {
public:
    Trigger() {}
};

struct ResourceCost {
    ResourceType type_;
    double value_;
};

inline double parse_double(ParadoxFileParser::RvalueContext *ctx) {
    if (ctx->value()) {
        double ret;
        sscanf(ctx->value()->getText().c_str(), "%lf", &ret);
        return ret;
    }
    return -1.0;
}

inline ResourceCost parse_resource_cost(ParadoxFileParser::PairContext *ctx) {
    return { parse_resource_type(ctx->lvalue()->getText()), parse_double(ctx->rvalue()) };
}

class Cost {`
public:
    Cost() {}

private:
    std::vector<ResourceCost> costs_;
    Trigger trigger;
};

class StationInfo {
public:
    StationInfo(std::string name) : name_(name) {}

    void setBuildTime(const std::string &value) {
        sscanf(value.c_str(), "%d", &build_time_);
    }

private:
    std::string name_;
    int build_time_;
};

class StationsVisitor : public ParadoxFileBaseListener {

};
