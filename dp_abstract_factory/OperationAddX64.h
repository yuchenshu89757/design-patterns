#ifndef _OPERATIONADDX64_H
#define _OPERATIONADDX64_H
#include "OperationAdd.h"
class OperationAddX64 : public OperationAdd{
public:
	OperationAddX64();
	OperationAddX64(double, double);
	~OperationAddX64();
	double GetResult(std::ostream &os);
};
#endif