#ifndef OPERATIONMUL_H
#define OPERATIONMUL_H
#include "Operation.h"
class OperationMul : public Operation{
public:
	OperationMul() = default;
	OperationMul(double numA, double numB) : Operation(numA, numB){}
	double getResult()const override{
		return num_a * num_b;
	}
	~OperationMul() = default;
};
#endif