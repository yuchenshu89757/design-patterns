#ifndef FACTORYADD_H
#define FACTORYADD_H
#include "IFactory.h"
#include "Operation.h"
#include "OperationAdd.h"
class FactoryAdd : public IFactory{
public:
	FactoryAdd() = default;
	Operation *createOperation()override{
		return new OperationAdd();
	}
	~FactoryAdd() = default;
};
#endif