#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Command.h"
#include <list>
class Controller{
public:
	void addCommand(Command*);
	void removeCommand(Command*);
	void executeCommand()const;
private:
	std::list<Command*> _list;
};
#endif