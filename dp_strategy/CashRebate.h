#ifndef CASHREBATE_H
#define CASHREBATE_H
#include "CashSuper.h"
class CashRebate : public CashSuper{
private:
	double moneyRebate = 1;
public:
	CashRebate() = default;
	CashRebate(double rebate) :moneyRebate(rebate){}
	double acceptCash(double money)const override{ return moneyRebate * money; }
};
#endif