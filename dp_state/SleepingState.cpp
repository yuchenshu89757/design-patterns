#include "SleepingState.h"
#include <iostream>
#include "Work.h"
void SleepingState::handle(Work& work){
	std::cout << "��ǰʱ��:" << work.getHour() << "�㣬�����ˣ�˯����" << std::endl;
}

SleepingState::~SleepingState() = default;
