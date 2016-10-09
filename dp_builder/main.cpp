#include "KFCWaiter.h"
#include "SubMealBuilderA.h"
#include "SubMealBuilderB.h"

int main(void)
{
	SubMealBuilderA *builderA = new SubMealBuilderA;
	SubMealBuilderB *builderB = new SubMealBuilderB;
	KFCWaiter *waiter = new KFCWaiter;
	waiter->setMealBuilder(builderA);
	Meal *meal = waiter->construct();
	meal->display();
	return 0;
}