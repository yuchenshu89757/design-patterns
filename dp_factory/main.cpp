#include <iostream>
#include "Operation.h"
#include "IFactory.h"
#include "FactoryAdd.h"
#include "FactoryMul.h"
using namespace std;
int main()
{
	IFactory *operFactory = new FactoryAdd();
	Operation *oper = operFactory->createOperation();
	oper->setNumA(1.2);
	oper->setNumB(3.4);
	double result = oper->getResult();
	cout << "Result = " << result << endl;
	return 0;
}