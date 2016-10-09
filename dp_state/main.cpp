#include "Work.h"

int main(void)
{
	Work work;
	work.setHour(9);
	work.writeProgram();

	work.setHour(13);
	work.writeProgram();

	return 0;
}
