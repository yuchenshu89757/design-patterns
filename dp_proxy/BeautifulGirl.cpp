#include "BeautifulGirl.h"

BeautifulGirl::BeautifulGirl() = default;

BeautifulGirl::BeautifulGirl(const std::string& name) :_name(name){}

void BeautifulGirl::setName(const std::string& name){
	_name = name;
}

std::string BeautifulGirl::getName()const{
	return _name;
}