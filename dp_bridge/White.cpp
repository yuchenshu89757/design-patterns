#include "White.h"
#include "Shape.h"
#include <iostream>

White::White() = default;

White::~White() = default;

void White::be_painted(Shape *sp){
	std::cout << "White " << sp->get_name() << std::endl;
}

