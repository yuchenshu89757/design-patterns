#include "OpenTvCommand.h"
#include "CloseTvCommand.h"
#include "ChangeChannelCommand.h"
#include "Controller.h"
#include <iostream>
using namespace std;

int main(void)
{
	Controller* controller = new Controller;
	Television* tv = new Television;
	OpenTvCommand *open = new OpenTvCommand(tv);
	CloseTvCommand *close = new CloseTvCommand(tv);
	ChangeChannelCommand *change = new ChangeChannelCommand(tv);
	controller->addCommand(open);
	controller->addCommand(close);
	controller->addCommand(change);
	controller->addCommand(open);
	controller->addCommand(close);
	controller->executeCommand();

	cout << endl;
	controller->removeCommand(open);
	controller->removeCommand(close);
	controller->executeCommand();

	return 0;
}