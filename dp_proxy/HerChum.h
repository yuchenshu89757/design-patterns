#ifndef _HERCHUM_H_
#define _HERCHUM_H_

#include "IGiveGift.h"
#include "ShyBoy.h"

class HerChum : public IGiveGift{
public:
	HerChum(const std::string&);
	void giveFlower()override;
	void giveChocolate()override;
	void giveBook()override;
private:
	ShyBoy boy;
};
#endif