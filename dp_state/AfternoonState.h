#ifndef _AFTERNOONSTATE_H_
#define _AFTERNOONSTATE_H_

#include "State.h"

class AfternoonState : public State{
public:
	virtual void handle(Work&)override;
	virtual ~AfternoonState();
};
#endif