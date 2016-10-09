#ifndef _REQUEST_H_
#define _REQUEST_H_
#include <string>
class Request{
public:
    void setRequestType(const std::string&);
    void setRequestContent(const std::string&);
    void setRequestNum(int num);
    std::string getRequestType()const;
    std::string getRequestContent()const;
    int         getRequestNum()const;
private:
    std::string requestType;
    std::string requestContent;
    int         requestNum;
};
#endif // _REQUEST_H_
