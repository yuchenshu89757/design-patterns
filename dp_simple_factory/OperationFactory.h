#ifndef OPERATIONFACTORY_H
#define OPERATIONFACTORY_H
#include "Operation.h"
#include "OperationAdd.h"
#include "OperationSub.h"
/*创建型模式-静态工厂方法*/
class OperationFactory{
public:
	static Operation *createOperate(double nPA, double nPB, OP op)
	{
		Operation *oper = nullptr;
		switch (op)
		{
			case ADD:oper = new OperationAdd(nPA, nPB);
					break;
			case SUB:oper = new OperationSub(nPA, nPB);
				break;
		}
		return oper;
	}
};
#endif