#ifndef _SUIT_H_
#define _SUIT_H_

#include "Decorator.h"

class Suit : public Decorator{

public:

	Suit();

	Suit(const Suit&) = delete;

	Suit &operator=(const Suit&) = delete;

	~Suit();

	void show()const override;

};
#endif