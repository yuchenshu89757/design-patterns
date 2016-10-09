#ifndef _STATE_H_
#define _STATE_H_

class Work;
class State{
public:
	virtual void handle(Work&) = 0;
	virtual ~State();
};
#endif
