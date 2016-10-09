#ifndef COMMAND_H
#define COMMAND_H
#include "Television.h"
class Command{
public:
	Command(Television*);
	virtual void execute() = 0;
	virtual ~Command();
protected:
	Television *pTv;
};
#endif