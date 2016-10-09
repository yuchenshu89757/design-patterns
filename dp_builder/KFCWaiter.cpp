#include "KFCWaiter.h"

KFCWaiter::KFCWaiter() = default;

KFCWaiter::~KFCWaiter() = default;

void KFCWaiter::setMealBuilder(MealBuilder *builder){
	mealBuilder = builder;
}

Meal *KFCWaiter::construct(){
	if (!mealBuilder)return nullptr;
	mealBuilder->buildFood();
	mealBuilder->buildDrink();
	return mealBuilder->getMeal();
}