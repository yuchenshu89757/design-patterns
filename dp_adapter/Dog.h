#ifndef _DOG_H
#define _DOG_H
#include <string>
#include <iostream>
class Dog{
public:
	Dog();
	Dog(const std::string&);
	~Dog();
	void bark()const;
	void run()const;
	void set_name(const std::string&);
	std::string get_name()const;
private:
	std::string d_name;
};
#endif