#ifndef _ABSTRACTOPERATIONFACTORY_H
#define _ABSTRACTOPERATIONFACTORY_H
#include "Operation.h"
class AbstractOperationFactory{
public:
	AbstractOperationFactory();
	virtual ~AbstractOperationFactory();
	virtual Operation *CreateOperationAdd(double, double) = 0;
	virtual Operation *CreateOperationSub(double, double) = 0;
	virtual Operation *CreateOperationMul(double, double) = 0;
	virtual Operation *CreateOperationDiv(double, double) = 0;
};
#endif