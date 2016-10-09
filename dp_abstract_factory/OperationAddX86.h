#ifndef _OPERATIONADDX86_H
#define _OPERATIONADDX86_H
#include "OperationAdd.h"
class OperationAddX86 : public OperationAdd{
public:
	OperationAddX86();
	OperationAddX86(double, double);
	~OperationAddX86();
	double GetResult(std::ostream &os);
};
#endif