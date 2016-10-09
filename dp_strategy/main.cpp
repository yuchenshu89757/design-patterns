#include <iostream>
#include "CashContext.h"
using namespace std;
int main()
{
	CashContext *cc = new CashContext(Strategy::Return);
	cout << cc->getResult(650) << endl;
	return 0;
}