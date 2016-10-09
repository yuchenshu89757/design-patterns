#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <string>

class Observer{
public:
	Observer(const std::string&);
	virtual void update() = 0;
	virtual ~Observer();
protected:
	std::string _name;
};
#endif