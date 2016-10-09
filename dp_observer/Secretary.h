#ifndef _SECRETARY_H_
#define _SECRETARY_H_

#include "Subject.h"

class Secretary : public Subject{
public:
	void notify()override;
};
#endif