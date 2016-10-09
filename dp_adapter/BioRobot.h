#ifndef _BIOROBOT_H
#define _BIOROBOT_H
#include <iostream>
#include "Robot.h"
class BioRobot : public Robot{
public:
	BioRobot();
	~BioRobot();
	void cry()const override;
	void move()const override;
};
#endif