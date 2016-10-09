#include "EveningState.h"
#include "SleepingState.h"
#include <iostream>
#include "Work.h"
void EveningState::handle(Work& work){
	if (work.getHour() < 22)
		std::cout << "��ǰʱ��:" << work.getHour() << "�㣬�Ӱ�Ŷ��ƣ������" << std::endl;
	else{
		work.setState(new SleepingState());
		work.writeProgram();
	}
}

EveningState::~EveningState() = default;
