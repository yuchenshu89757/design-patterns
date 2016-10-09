#include "AfternoonState.h"
#include "EveningState.h"
#include <iostream>
#include "Work.h"
void AfternoonState::handle(Work& work){
	if (work.getHour() < 18)
		std::cout << "当前时间:" << work.getHour() << "点，下午状态还不错，继续努力" << std::endl;
	else{
		work.setState(new EveningState());
		work.writeProgram();
	}
}

AfternoonState::~AfternoonState() = default;
