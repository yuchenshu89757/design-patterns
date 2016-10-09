#include <iostream>
#include "HerChum.h"
int main(void)
{
	HerChum *chum = new HerChum("Joe");
	chum->giveFlower();
	chum->giveChocolate();
	chum->giveBook();
	return 0;
}