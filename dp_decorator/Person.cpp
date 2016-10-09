#include "Person.h"

Person::Person() = default;

Person::Person(const std::string &name) :p_name(name){}

Person::~Person() = default;

void Person::show()const
{
	std::cout << "×°°çµÄ" << p_name << std::endl;
}