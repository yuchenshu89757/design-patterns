#ifndef _BOSS_H_
#define _BOSS_H_

#include "Subject.h"

class Boss : public Subject{
public:
	void notify()override;
};
#endif