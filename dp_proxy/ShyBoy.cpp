#include "ShyBoy.h"
#include <iostream>
ShyBoy::ShyBoy(const std::string& girl) :goodGirl(girl){}

void ShyBoy::giveFlower(){
	std::cout << goodGirl.getName() << ", give you a book." << std::endl;
}

void ShyBoy::giveChocolate(){
	std::cout << goodGirl.getName() << ", give you a chocolate." << std::endl;
}

void ShyBoy::giveBook(){
	std::cout << goodGirl.getName() << ", give you a book." << std::endl;
}