#ifndef _SLEEPINGSTATE_H_
#define _SLEEPINGSTATE_H_

#include "State.h"

class SleepingState : public State{
public:
	virtual void handle(Work&)override;
	virtual ~SleepingState();
};
#endif