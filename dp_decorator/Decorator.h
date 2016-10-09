#ifndef _DECORATOR_H_
#define _DECORATOR_H_

#include "Person.h"

class Decorator : public Person{

public:

	Decorator();

	Decorator(const Decorator&) = delete;

	Decorator &operator=(const Decorator&) = delete;

	virtual ~Decorator();

	virtual void show()const override;

	void decorate(Person*);

protected:

	Person *d_component;

};
#endif