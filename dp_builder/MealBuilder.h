#ifndef _MEALBUILDER_H
#define _MEALBUILDER_H
#include "Meal.h"
class MealBuilder{
public:
	MealBuilder();
	virtual ~MealBuilder();
	virtual void buildFood() = 0;
	virtual void buildDrink() = 0;
	virtual Meal *getMeal() = 0;
protected:
	Meal *meal;
};
#endif