#include "Square.h"
#include "Color.h"

Square::Square() = default;

Square::Square(const std::string &name) :Shape(name){}

Square::~Square() = default;

void Square::draw(){
	this->_color->be_painted(this);
}