#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <string>
#include <list>
#include "Observer.h"

class Subject{
public:
	void attach(Observer*);
	void detach(Observer*);
	virtual void notify() = 0;
	virtual ~Subject();
protected:
	std::list<Observer*> _observers;
};
#endif