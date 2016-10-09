#ifndef _TIE_H_
#define _TIE_H_

#include "Decorator.h"

class Tie : public Decorator{

public:

	Tie();

	Tie(const Tie&) = delete;

	Tie &operator=(const Tie&) = delete;

	~Tie();

	void show()const override;

};
#endif