#include "Manager.h"
#include "Request.h"
#include <iostream>

Manager::Manager(const std::string& name):Leader(name){}

void Manager::handleRequest(const Request& request)
{
    if(request.getRequestType().compare("请假") == 0 &&
        request.getRequestNum() <= 2)
        std::cout << leaderName << " : " << request.getRequestContent() << " 数量 : " << request.getRequestNum() << " 被批准";
    else if(successor != nullptr)
        successor->handleRequest(request);
}
