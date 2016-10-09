#include "BioRobot.h"

BioRobot::BioRobot() = default;

BioRobot::~BioRobot() = default;

void BioRobot::cry()const{
	std::cout << "BioRobot : cry cry cry...." << std::endl;
}

void BioRobot::move()const{
	std::cout << "BioRobot : move move move..." << std::endl;
}