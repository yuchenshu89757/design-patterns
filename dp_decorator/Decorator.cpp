#include "Decorator.h"

Decorator::Decorator() = default;

Decorator::~Decorator()
{
	delete d_component;
}

void Decorator::show()const
{
	if (d_component != nullptr)
		d_component->show();
}

void Decorator::decorate(Person *person)
{
	this->d_component = person;
}