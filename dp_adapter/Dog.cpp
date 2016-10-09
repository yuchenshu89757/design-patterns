#include "Dog.h"

Dog::Dog() = default;

Dog::~Dog() = default;

Dog::Dog(const std::string &name) :d_name(name){}

void Dog::bark()const{
	std::cout << this->d_name << "," << "wang wang wang..." << std::endl;
}

void Dog::run()const{
	std::cout << this->d_name << "," << "run run run..." << std::endl;
}

void Dog::set_name(const std::string &name){
	this->d_name = name;
}

std::string Dog::get_name()const{
	return this->d_name;
}