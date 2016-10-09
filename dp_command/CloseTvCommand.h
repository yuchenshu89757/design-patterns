#ifndef CLOSETVCOMMAND_H
#define CLOSETVCOMMAND_H

#include "Command.h"

class CloseTvCommand : public Command{
public:
	CloseTvCommand(Television*);
	virtual void execute()override;
	virtual ~CloseTvCommand();
};
#endif