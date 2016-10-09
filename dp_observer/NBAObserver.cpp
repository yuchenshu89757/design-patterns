#include "NBAObserver.h"
#include <iostream>

NBAObserver::NBAObserver(const std::string& name) :Observer(name){}

void NBAObserver::update(){
	std::cout << _name << ", close the NBA, continue to work." << std::endl;
}