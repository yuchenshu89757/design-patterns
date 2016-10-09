#include "Secretary.h"
#include <iostream>

void Secretary::notify(){
	std::cout << "The boss come back!!!" << std::endl;
	for (auto item : _observers)
		item->update();
}