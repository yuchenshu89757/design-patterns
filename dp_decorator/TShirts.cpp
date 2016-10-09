#include "TShirts.h"

TShirts::TShirts() = default;

TShirts::~TShirts() = default;

void TShirts::show()const
{
	std::cout << "´óTÐô ";
	Decorator::show();
}