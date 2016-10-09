#ifndef _SNEAKERS_H_
#define _SNEAKERS_H_

#include "Decorator.h"

class Sneakers : public Decorator{

public:

	Sneakers();

	Sneakers(const Sneakers&) = delete;

	Sneakers &operator=(const Sneakers&) = delete;

	~Sneakers();

	void show()const override;

};
#endif