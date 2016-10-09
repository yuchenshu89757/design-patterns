#include "Boss.h"
#include <iostream>

void Boss::notify(){
	std::cout << "I am the boss!!" << std::endl;
	for (auto item : _observers)
		item->update();
}