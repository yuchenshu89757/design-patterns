#ifndef CASHRETURN_H
#define CASHRETURN_H
#include "CashSuper.h"
#include <cmath>
class CashReturn : public CashSuper{
private:
	double moneyCondition = 0.0;
	double moneyReturn = 0.0;
public:
	CashReturn() = default;
	CashReturn(double cond, double ret) : moneyCondition(cond), moneyReturn(ret){}
	double acceptCash(double money)const override
	{
		double ret = money;
		if (money > moneyCondition)
		{
			ret = money - floor(money / moneyCondition) * moneyReturn;
		}
		return ret;
	}
};
#endif