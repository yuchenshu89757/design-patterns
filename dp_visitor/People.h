#ifndef PEOPLE_H
#define PEOPLE_H
#include "Action.h"
class People{
public:
	People(void){}
	virtual ~People(void){}
	virtual void accept(Action action)
};
#endif