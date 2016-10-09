#ifndef _MANAGER_H_
#define _MANAGER_H_

#include "Leader.h"

class Manager : public Leader{
public:
    Manager(const std::string&);
    void handleRequest(const Request&)override;
};
#endif // _MANAGER_H_
