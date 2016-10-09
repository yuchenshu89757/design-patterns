#include "LeatherShoes.h"

LeatherShoes::LeatherShoes() = default;

LeatherShoes::~LeatherShoes() = default;

void LeatherShoes::show()const
{
	std::cout << "ƤЬ ";
	Decorator::show();
}