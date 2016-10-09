#include "Director.h"
#include "Request.h"
#include <iostream>

Director::Director(const std::string& name) : Leader(name){}

void Director::handleRequest(const Request& request)
{
    if(request.getRequestType().compare("���") == 0)
        std::cout << leaderName << " : " << request.getRequestContent() << " ���� : " << request.getRequestNum() << " ����׼";
    else if(request.getRequestType().compare("��н") == 0 &&
                request.getRequestNum() <= 500)
        std::cout << leaderName << " : " << request.getRequestContent() << " ���� : " << request.getRequestNum() << " ����׼";
    else if(request.getRequestType().compare("��н") == 0 &&
                request.getRequestNum() > 500)
        std::cout << leaderName << " : " << request.getRequestContent() << " ���� : " << request.getRequestNum() << " ��˵��";
}
