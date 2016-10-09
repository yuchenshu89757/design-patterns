#include "Shape.h"

Shape::Shape() = default;

Shape::Shape(const std::string &name) :_name(name){}

Shape::~Shape(){
	delete _color;
}

void Shape::set_color(Color *color){
	this->_color = color;
}

void Shape::set_name(const std::string &name){
	this->_name = name;
}

std::string Shape::get_name()const{
	return this->_name;
}