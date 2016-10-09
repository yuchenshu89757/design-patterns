#ifndef _LEATHERSHOES_H_
#define _LEATHERSHOES_H_

#include "Decorator.h"

class LeatherShoes : public Decorator{

public:

	LeatherShoes();

	LeatherShoes(const LeatherShoes&) = delete;

	LeatherShoes &operator=(const LeatherShoes&) = delete;

	~LeatherShoes();

	void show()const override;

};
#endif