#include "Meal.h"

Meal::Meal() = default;

Meal::~Meal() = default;

void Meal::setFood(const std::string &food){
	this->food = food;
}

void Meal::setDrink(const std::string &drink){
	this->drink = drink;
}

std::string Meal::getFood()const{
	return this->food;
}

std::string Meal::getDrink()const{
	return this->drink;
}

void Meal::display()const{
	std::cout << "Food : " << food << std::endl;
	std::cout << "Drink: " << drink << std::endl;
}

