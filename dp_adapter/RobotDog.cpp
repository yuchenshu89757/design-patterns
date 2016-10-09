#include "RobotDog.h"

RobotDog::RobotDog(Dog *dog) :dog(dog){}

RobotDog::~RobotDog(){
	delete this->dog;
}

void RobotDog::cry()const{
	this->dog->bark();
}

void RobotDog::move()const{
	this->dog->run();
}
