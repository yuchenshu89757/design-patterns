#include "Inspector.h"
#include "Request.h"
#include <iostream>

Inspector::Inspector(const std::string& name) : Leader(name){}

void Inspector::handleRequest(const Request& request)
{
    if(request.getRequestType().compare("���") == 0 &&
        request.getRequestNum() <= 5)
        std::cout << leaderName << " : " << request.getRequestContent() << " ���� : " << request.getRequestNum() << " ����׼";
    else if(successor != nullptr)
        successor->handleRequest(request);
}
