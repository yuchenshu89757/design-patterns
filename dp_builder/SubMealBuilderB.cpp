#include "SubMealBuilderB.h"

SubMealBuilderB::SubMealBuilderB() = default;

SubMealBuilderB::~SubMealBuilderB() = default;

void SubMealBuilderB::buildFood(){
	this->meal->setFood("noodle");
}

void SubMealBuilderB::buildDrink(){
	this->meal->setDrink("juice");
}

Meal *SubMealBuilderB::getMeal(){
	return meal;
}