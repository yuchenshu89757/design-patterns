#ifndef _OPERATIONADD_H
#define _OPERATIONADD_H
#include "Operation.h"
class OperationAdd : public Operation{
public:
	OperationAdd();
	OperationAdd(double, double);
	virtual ~OperationAdd();
	virtual double GetResult(std::ostream &os) = 0;
};
#endif