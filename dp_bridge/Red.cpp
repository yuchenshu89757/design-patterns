#include "Red.h"
#include "Shape.h"
#include <iostream>

Red::Red() = default;

Red::~Red() = default;

void Red::be_painted(Shape *sp){
	std::cout << "Red " << sp->get_name() << std::endl;
}