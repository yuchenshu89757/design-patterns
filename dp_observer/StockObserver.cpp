#include "StockObserver.h"
#include <iostream>

StockObserver::StockObserver(const std::string& name) :Observer(name){}

void StockObserver::update(){
	std::cout << _name << "close the stock, continue to work." << std::endl;
}