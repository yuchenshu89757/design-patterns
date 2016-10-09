#ifndef _OPERATIONFACTORYX86_H
#define _OPERATIONFACTORYX86_H
#include "AbstractOperationFactory.h"
#include "OperationAddX86.h"
class OperationFactoryX86 : public AbstractOperationFactory{
public:
	OperationFactoryX86();
	~OperationFactoryX86();
	Operation *CreateOperationAdd(double, double);
	Operation *CreateOperationSub(double, double);
	Operation *CreateOperationMul(double, double);
	Operation *CreateOperationDiv(double, double);
};
#endif