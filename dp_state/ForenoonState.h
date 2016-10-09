#ifndef _FORENOONSTATE_H_
#define _FORENOONSTATE_H_

#include "State.h"

class ForenoonState : public State{
public:
	virtual void handle(Work&)override;
	virtual ~ForenoonState();
};
#endif