#include "ResumeA.h"

ResumeA::ResumeA(){}

Resume *ResumeA::clone(){
	ResumeA *obj = new ResumeA();
	obj->set_name(this->r_name);
	obj->set_sex(this->r_sex);
	obj->set_age(this->r_age);
	obj->set_timeArea(this->timeArea);
	obj->set_company(company);
	return obj;
}

void ResumeA::show(){
	std::cout << "ResumeA" << std::endl;
	std::cout << "Name     : " << r_name << std::endl;
	std::cout << "Sex      : " << r_sex << std::endl;
	std::cout << "Age      : " << r_age << std::endl;
	std::cout << "TimeArea : " << timeArea << std::endl;
	std::cout << "Company  : " << company << std::endl;
}