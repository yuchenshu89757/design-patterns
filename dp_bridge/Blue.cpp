#include "Blue.h"
#include "Shape.h"
#include <iostream>

Blue::Blue() = default;

Blue::~Blue() = default;

void Blue::be_painted(Shape *sp){
	std::cout << "Blue " << sp->get_name() << std::endl;
}