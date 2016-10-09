#ifndef OPERATIONSUB_H
#define OPERATIONSUB_H
#include "Operation.h"
class OperationSub : public Operation{
public:
	OperationSub() = default;
	OperationSub(double nPA, double nPB) : Operation(nPA, nPB){}
	double getResult()const override{ return n_pA - n_pB; }
};
#endif