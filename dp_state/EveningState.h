#ifndef _EVENINGSTATE_H_
#define _EVENINGSTATE_H_

#include "State.h"

class EveningState : public State{
public:
	virtual void handle(Work&)override;
	virtual ~EveningState();
};
#endif