#ifndef _MEAL_H
#define _MEAL_H
#include <string>
#include <iostream>
class Meal{
public:
	Meal();
	~Meal();
	void setFood(const std::string&);
	void setDrink(const std::string&);
	std::string getFood()const;
	std::string getDrink()const;
	void display()const;
private:
	std::string food;
	std::string drink;
};
#endif