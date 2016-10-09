#include "Circle.h"
#include "Color.h"
Circle::Circle() = default;

Circle::Circle(const std::string &name) :Shape(name){}

Circle::~Circle() = default;

void Circle::draw(){
	this->_color->be_painted(this);
}

