#include "Rectangle.h"
#include "Color.h"

Rectangle::Rectangle() = default;

Rectangle::Rectangle(const std::string &name) :Shape(name){}

Rectangle::~Rectangle() = default;

void Rectangle::draw(){
	this->_color->be_painted(this);
}