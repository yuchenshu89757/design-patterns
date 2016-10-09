#ifndef _OPERATIONFACTORYX64_H
#define _OPERATIONFACTORYX64_H
#include "AbstractOperationFactory.h"
#include "OperationAddX64.h"
class OperationFactoryX64 : public AbstractOperationFactory{
public:
	OperationFactoryX64();
	~OperationFactoryX64();
	Operation *CreateOperationAdd(double, double);
	Operation *CreateOperationSub(double, double);
	Operation *CreateOperationMul(double, double);
	Operation *CreateOperationDiv(double, double);
};
#endif