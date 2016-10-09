#include "Command.h"

Command::Command(Television *tv) :pTv(tv){}

Command::~Command()
{
	delete pTv;
}