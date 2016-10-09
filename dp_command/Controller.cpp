#include "Controller.h"

void Controller::addCommand(Command* comm)
{
	_list.push_back(comm);
}

void Controller::removeCommand(Command* comm)
{
	_list.remove(comm);
}

void Controller::executeCommand()const
{
	for (auto comm : _list)
		comm->execute();
}