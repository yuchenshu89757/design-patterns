#include "Sneakers.h"

Sneakers::Sneakers() = default;

Sneakers::~Sneakers() = default;

void Sneakers::show()const
{
	std::cout << "����Ь ";
	Decorator::show();
}