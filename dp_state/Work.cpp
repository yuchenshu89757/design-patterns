#include "Work.h"
#include "ForenoonState.h"

Work::Work(){
	pState = new ForenoonState();
}

void Work::setHour(double hour){
	_hour = hour;
}

double Work::getHour()const{
	return _hour;
}

void Work::setState(State* newState){
	delete pState;
	pState = newState;
}

void Work::writeProgram(){
	pState->handle(*this);
}

Work::~Work(){
	delete pState;
}
