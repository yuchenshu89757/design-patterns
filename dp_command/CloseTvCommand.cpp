#include "CloseTvCommand.h"

CloseTvCommand::CloseTvCommand(Television* tv) :Command(tv){}

void CloseTvCommand::execute()
{
	pTv->closeTv();
}

CloseTvCommand::~CloseTvCommand() = default;