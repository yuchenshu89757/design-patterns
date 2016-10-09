#ifndef _SUBMEALBUILDERA_H
#define _SUBMEALBUILDERA_H
#include "MealBuilder.h"
class SubMealBuilderA : public MealBuilder{
public:
	SubMealBuilderA();
	~SubMealBuilderA();
	void buildFood()override;
	void buildDrink()override;
	Meal *getMeal()override;
};
#endif