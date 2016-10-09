#ifndef _SHYBOY_H_
#define _SHYBOY_H_

#include "IGiveGift.h"
#include "BeautifulGirl.h"

class ShyBoy : public IGiveGift{
public:
	ShyBoy(const std::string&);
	void giveFlower()override;
	void giveChocolate()override;
	void giveBook()override;
private:
	BeautifulGirl goodGirl;
};
#endif