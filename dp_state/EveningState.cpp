#include "EveningState.h"
#include "SleepingState.h"
#include <iostream>
#include "Work.h"
void EveningState::handle(Work& work){
	if (work.getHour() < 22)
		std::cout << "当前时间:" << work.getHour() << "点，加班哦，疲惫至极" << std::endl;
	else{
		work.setState(new SleepingState());
		work.writeProgram();
	}
}

EveningState::~EveningState() = default;
