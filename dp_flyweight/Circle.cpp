#include "Circle.h"
#include <iostream>

Circle::Circle(const std::string &cr) :color(cr){}

Circle::Circle(const Circle &circle) : color(circle.color){}

Circle &Circle::operator=(const Circle &rhs)
{
	this->color = rhs.color;
	return *this;
}

void Circle::draw()
{
	std::cout << "draw a " << color << " circle." << std::endl;
}