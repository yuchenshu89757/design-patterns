#ifndef _ROBOTDOG_H
#define _ROBOTDOG_H
#include "Robot.h"
#include "Dog.h"
class RobotDog : public Robot{
public:
	RobotDog(Dog*);
	~RobotDog();
	void cry()const override;
	void move()const override;
private:
	Dog *dog;
};
#endif