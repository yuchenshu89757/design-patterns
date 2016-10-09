#include <iostream>
#include "Operation.h"
#include "OperationFactory.h"
using namespace std;
int main()
{
	Operation *oper = OperationFactory::createOperate(1, 2, OP::SUB);
	cout << oper->getResult() << endl;
	return 0;
}