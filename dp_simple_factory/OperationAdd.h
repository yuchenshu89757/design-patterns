#ifndef OPERATIONADD_H
#define OPERATIONADD_H
#include "Operation.h"
class OperationAdd : public Operation{
public:
	OperationAdd() = default;
	OperationAdd(double nPA, double nPB) : Operation(nPA, nPB){}
	double getResult()const override{ return n_pA + n_pB; }
};
#endif