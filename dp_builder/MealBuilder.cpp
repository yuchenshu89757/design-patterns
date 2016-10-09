#include "MealBuilder.h"

MealBuilder::MealBuilder() = default;

MealBuilder::~MealBuilder(){
	if (meal != nullptr)delete meal;
}

Meal *MealBuilder::getMeal(){
	return meal;
}