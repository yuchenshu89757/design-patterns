#ifndef _SUBMEALBUILDERB_H
#define _SUBMEALBUILDERB_H
#include "MealBuilder.h"
class SubMealBuilderB : public MealBuilder{
public:
	SubMealBuilderB();
	~SubMealBuilderB();
	void buildFood()override;
	void buildDrink()override;
	Meal *getMeal()override;
};
#endif