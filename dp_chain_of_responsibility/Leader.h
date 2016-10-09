#ifndef _LEADER_H_
#define _LEADER_H_

#include <string>
class Request;

class Leader{
public:
    Leader(const std::string&);
    void setLeader(Leader*);
    virtual ~Leader();
    virtual void handleRequest(const Request&) = 0;
protected:
    std::string leaderName;
    Leader *successor;
};
#endif // _LEADER_H_
