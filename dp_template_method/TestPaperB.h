#ifndef TESTPAPERB_H
#define TESTPAPERB_H
#include "TestPaper.h"
class TestPaperB : public TestPaper{
public:
	TestPaperB();
	~TestPaperB();
protected:
	std::string answer_1()const override;
	std::string answer_2()const override;
	std::string answer_3()const override;
};
#endif