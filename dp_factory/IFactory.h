#ifndef IFACTORY_H
#define IFACTORY_H
#include "Operation.h"
class IFactory{
public:
	IFactory() = default;
	virtual Operation* createOperation() = 0;
	virtual ~IFactory() = default;
};
#endif