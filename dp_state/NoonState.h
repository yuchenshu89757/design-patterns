#ifndef _NOONSTATE_H_
#define _NOONSTATE_H_

#include "State.h"

class NoonState : public State{
public:
	virtual void handle(Work&)override;
	virtual ~NoonState();
};
#endif