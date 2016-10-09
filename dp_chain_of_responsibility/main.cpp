#include <iostream>
#include "Manager.h"
#include "Inspector.h"
#include "Director.h"
#include "Request.h"

using namespace std;

int main()
{
    Manager *manager = new Manager("Zhangsan");
    Inspector *inspector = new Inspector("Lisi");
    Director *director = new Director("Wangwu");

    manager->setLeader(inspector);
    inspector->setLeader(director);

    Request request;
    request.setRequestType("请假");
    request.setRequestContent("小菜请假");
    request.setRequestNum(7);

    manager->handleRequest(request);
    return 0;
}
