#ifndef CHANGECHANNELCOMMAND_H
#define CHANGECHANNELCOMMAND_H

#include "Command.h"

class ChangeChannelCommand : public Command{
public:
	ChangeChannelCommand(Television*);
	virtual void execute()override;
	virtual ~ChangeChannelCommand();
};
#endif