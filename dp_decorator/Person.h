#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string>

class Person{

public:

	Person();

	Person(const std::string&);

	Person(const Person&) = delete;

	Person &operator=(const Person&) = delete;

	virtual ~Person();

	virtual void show()const;

private:

	std::string p_name;

};
#endif