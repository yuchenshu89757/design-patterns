#ifndef CASHNORMAL_H
#define CASHNORMAL_H
#include "CashSuper.h"
class CashNormal : public CashSuper{
public:
	CashNormal() = default;
	double acceptCash(double money)const override{ return money; }
};
#endif