#include "TestPaper.h"

TestPaper::TestPaper() = default;

TestPaper::~TestPaper() = default;

void TestPaper::test_question_1()const{
	std::cout << "1. we __ the family! A. are  B. were C. is  D.like" << std::endl;
	std::cout << "Answer: " << answer_1() << std::endl;
}
void TestPaper::test_question_2()const{
	std::cout << "2. who __ you! A. are  B. were C. is  D.like" << std::endl;
	std::cout << "Answer: " << answer_2() << std::endl;
}
void TestPaper::test_question_3()const{
	std::cout << "3. Thank __ very much! A. are  B. were C. is  D.like" << std::endl;
	std::cout << "Answer: " << answer_3() << std::endl;
}

void TestPaper::showPaper()const{
	test_question_1();
	test_question_2();
	test_question_3();
}