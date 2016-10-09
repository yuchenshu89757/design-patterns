#include "ForenoonState.h"
#include "NoonState.h"
#include <iostream>
#include "Work.h"
void ForenoonState::handle(Work& work){
	if (work.getHour() < 12)
		std::cout << "当前时间:" << work.getHour() << "点，上午工作，精神百倍" << std::endl;
	else{
		work.setState(new NoonState());
		work.writeProgram();
	}
}

ForenoonState::~ForenoonState() = default;

