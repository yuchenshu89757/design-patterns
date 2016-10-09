#include <iostream>

#include "OperationAddX64.h"
#include "OperationAddX86.h"
#include "OperationFactoryX64.h"
#include "OperationFactoryX86.h"

using namespace std;

int main(void)
{
	AbstractOperationFactory *factory1 = new OperationFactoryX86;
	AbstractOperationFactory *factory2 = new OperationFactoryX64;
	Operation *operation1 = factory1->CreateOperationAdd(1, 2);
	Operation *operation2 = factory2->CreateOperationAdd(1, 2);
	double result1 = operation1->GetResult(cout);
	double result2 = operation2->GetResult(cout);
	cout << result1 << " " << result2 << endl;
	return 0;
}