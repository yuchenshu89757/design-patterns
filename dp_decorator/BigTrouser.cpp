#include "BigTrouser.h"

BigTrouser::BigTrouser() = default;

BigTrouser::~BigTrouser() = default;

void BigTrouser::show()const
{
	std::cout << "��� ";
	Decorator::show();
}