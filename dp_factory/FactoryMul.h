#ifndef FACTORYMUL_H
#define FACTORYMUL_H
#include "IFactory.h"
#include "Operation.h"
#include "OperationMul.h"
class FactoryMul : public IFactory{
public:
	FactoryMul() = default;
	Operation *createOperation(){
		return new OperationMul();
	}
	~FactoryMul() = default;
};
#endif