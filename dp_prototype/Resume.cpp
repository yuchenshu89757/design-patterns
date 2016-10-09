#include "Resume.h"

Resume::Resume() = default;

Resume::~Resume() = default;

void Resume::set_name(const std::string &name){
	this->r_name = name;
}

void Resume::set_sex(const std::string &sex){
	this->r_sex = sex;
}

void Resume::set_age(const std::string &age){
	this->r_age = age;
}

void Resume::set_timeArea(const std::string &timearea){
	this->timeArea = timearea;
}

void Resume::set_company(const std::string &company){
	this->company = company;
}