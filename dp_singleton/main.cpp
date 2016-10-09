#include <iostream>

#include "Singleton.h"

using namespace std;

int main(void)
{
	Singleton *pSingleton1 = Singleton::GetInstance();
	Singleton *pSingleton2 = Singleton::GetInstance();
	cout << boolalpha << (pSingleton1 == pSingleton2) << endl;
	return 0;
}