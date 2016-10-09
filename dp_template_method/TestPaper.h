#ifndef TESTPAPER_H
#define TESTPAPER_H
#include <iostream>
#include <string>
class TestPaper{
public:
	TestPaper();
	void showPaper()const;
	virtual ~TestPaper();
protected:
	virtual  std::string answer_1()const = 0;
	virtual  std::string answer_2()const = 0;
	virtual  std::string answer_3()const = 0;
private:
	void test_question_1()const;
	void test_question_2()const;
	void test_question_3()const;
};
#endif