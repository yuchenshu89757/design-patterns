#include "Request.h"

void Request::setRequestType(const std::string& type)
{
    requestType = type;
}

void Request::setRequestContent(const std::string& content)
{
    requestContent = content;
}

void Request::setRequestNum(int num)
{
    requestNum = num;
}

std::string Request::getRequestType()const{
    return requestType;
}

std::string Request::getRequestContent()const{
    return requestContent;
}

int Request::getRequestNum()const{
    return requestNum;
}
