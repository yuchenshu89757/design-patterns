#include "ResumeA.h"
using namespace std;
int main()
{
	Resume *resumeA = new ResumeA;
	resumeA->set_name("ZhangSan");
	resumeA->set_sex("Male");
	resumeA->set_age("23");
	resumeA->set_timeArea("2014.03-2015.02");
	resumeA->set_company("Tencent");

	resumeA->show();

	Resume *resumeB = resumeA->clone();
	resumeB->set_age("24");
	resumeB->show();
	return 0;
}