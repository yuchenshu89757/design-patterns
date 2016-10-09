#ifndef IGIVEGIFT_H
#define IGIVEGIFT_H
class IGiveGift{
public:
	IGiveGift() = default;
	virtual void giveFlower() = 0;
	virtual void giveChocolate() = 0;
	virtual void giveBook() = 0;
	virtual ~IGiveGift() = default;
};
#endif