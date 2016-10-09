#include "Fund.h"

int main(void)
{
	Fund *fund = new Fund;
	fund->buy();
	fund->sell();

	delete fund;
	return 0;
}