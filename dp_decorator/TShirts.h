#ifndef _TSHIRTS_H_
#define _TSHIRTS_H

#include "Decorator.h"

class TShirts : public Decorator{

public:

	TShirts();

	TShirts(const TShirts&) = delete;

	TShirts &operator=(const TShirts&) = delete;

	~TShirts();

	void show()const override;

};
#endif