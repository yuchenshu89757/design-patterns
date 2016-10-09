#include "Suit.h"

Suit::Suit() = default;

Suit::~Suit() = default;

void Suit::show()const
{
	std::cout << "Î÷×° ";
	Decorator::show();
}