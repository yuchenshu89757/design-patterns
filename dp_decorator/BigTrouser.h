#ifndef _BIGTROUSER_H_
#define _BIGTROUSER_H_

#include "Decorator.h"

class BigTrouser : public Decorator{

public:

	BigTrouser();

	BigTrouser(const BigTrouser&) = delete;

	BigTrouser &operator=(const BigTrouser&) = delete;

	~BigTrouser();

	void show()const override;

};
#endif