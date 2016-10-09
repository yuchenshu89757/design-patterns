#ifndef _KFCWAITER_H
#define _KFCWAITER_H
#include "MealBuilder.h"
class KFCWaiter{
public:
	KFCWaiter();
	~KFCWaiter();
	void setMealBuilder(MealBuilder *mb);
	Meal *construct();
private:
	MealBuilder *mealBuilder;
};
#endif