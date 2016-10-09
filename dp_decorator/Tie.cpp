#include "Tie.h"

Tie::Tie() = default;

Tie::~Tie() = default;

void Tie::show()const
{
	std::cout << "Áì´ø ";
	Decorator::show();
}