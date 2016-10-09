#ifndef TESTPAPERA_H
#define TESTPAPERA_H
#include "TestPaper.h"
class TestPaperA : public TestPaper{
public:
	TestPaperA();
	~TestPaperA();
protected:
	std::string answer_1()const override;
	std::string answer_2()const override;
	std::string answer_3()const override;
};
#endif