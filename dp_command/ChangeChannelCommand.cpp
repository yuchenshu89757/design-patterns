#include "ChangeChannelCommand.h"

ChangeChannelCommand::ChangeChannelCommand(Television* tv) :Command(tv){}

void ChangeChannelCommand::execute()
{
	pTv->changeChannel();
}

ChangeChannelCommand::~ChangeChannelCommand() = default;