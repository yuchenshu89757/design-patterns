#include "NoonState.h"
#include "AfternoonState.h"
#include <iostream>
#include "Work.h"
void NoonState::handle(Work& work){
	if (work.getHour() < 13)
		std::cout << "当前时间:" << work.getHour() << "点，饿了，午饭后午休" << std::endl;
	else{
		work.setState(new AfternoonState());
		work.writeProgram();
	}
}

NoonState::~NoonState() = default;
