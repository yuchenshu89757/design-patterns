#include "AfternoonState.h"
#include "EveningState.h"
#include <iostream>
#include "Work.h"
void AfternoonState::handle(Work& work){
	if (work.getHour() < 18)
		std::cout << "��ǰʱ��:" << work.getHour() << "�㣬����״̬����������Ŭ��" << std::endl;
	else{
		work.setState(new EveningState());
		work.writeProgram();
	}
}

AfternoonState::~AfternoonState() = default;
