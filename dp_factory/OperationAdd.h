#ifndef OPERATIONADD_H
#define OPERATIONADD_H
#include "Operation.h"
class OperationAdd : public Operation{
public:
	OperationAdd() = default;
	OperationAdd(double numA, double numB) :Operation(numA, numB){}
	double getResult()const override{
		return num_a + num_b;
	}
	~OperationAdd() = default;
};
#endif