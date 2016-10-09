#include "SubMealBuilderA.h"

SubMealBuilderA::SubMealBuilderA() = default;

SubMealBuilderA::~SubMealBuilderA() = default;

void SubMealBuilderA::buildFood(){
	this->meal->setFood("Hanberge");
}

void SubMealBuilderA::buildDrink(){
	this->meal->setDrink("Coke");
}

Meal *SubMealBuilderA::getMeal(){
	return meal;
}