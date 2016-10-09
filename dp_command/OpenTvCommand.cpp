#include "OpenTvCommand.h"

OpenTvCommand::OpenTvCommand(Television *tv) :Command(tv){}

void OpenTvCommand::execute()
{
	pTv->openTv();
}

OpenTvCommand::~OpenTvCommand() = default;