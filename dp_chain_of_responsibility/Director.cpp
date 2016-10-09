#include "Director.h"
#include "Request.h"
#include <iostream>

Director::Director(const std::string& name) : Leader(name){}

void Director::handleRequest(const Request& request)
{
    if(request.getRequestType().compare("请假") == 0)
        std::cout << leaderName << " : " << request.getRequestContent() << " 数量 : " << request.getRequestNum() << " 被批准";
    else if(request.getRequestType().compare("加薪") == 0 &&
                request.getRequestNum() <= 500)
        std::cout << leaderName << " : " << request.getRequestContent() << " 数量 : " << request.getRequestNum() << " 被批准";
    else if(request.getRequestType().compare("加薪") == 0 &&
                request.getRequestNum() > 500)
        std::cout << leaderName << " : " << request.getRequestContent() << " 数量 : " << request.getRequestNum() << " 再说吧";
}
