#include "Leader.h"

Leader::Leader(const std::string& name):leaderName(name){}

Leader::~Leader() = default;

void Leader::setLeader(Leader* leader)
{
    successor = leader;
}
