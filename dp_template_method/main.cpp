#include "TestPaperA.h"
#include "TestPaperB.h"
using namespace std;
int main()
{
	TestPaper *testA = new TestPaperA();
	TestPaper *testB = new TestPaperB();

	testA->showPaper();
	testB->showPaper();

	return 0;
}