#ifndef OPENTVCOMMAND_H
#define OPENTVCOMMAND_H

#include "Command.h"

class OpenTvCommand : public Command{
public:
	OpenTvCommand(Television*);
	virtual void execute()override;
	virtual ~OpenTvCommand();
};
#endif