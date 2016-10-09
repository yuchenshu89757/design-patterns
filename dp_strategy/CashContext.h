#ifndef CASHCONTEXT_H
#define CASHCONTEXT_H
#include "CashSuper.h"
#include "CashNormal.h"
#include "CashRebate.h"
#include "CashReturn.h"
enum Strategy{ Normal, Rebate, Return };
class CashContext{
private:
	CashSuper *p_CashSuper;
public:
	CashContext() = default;
	CashContext(Strategy type)
	{
		p_CashSuper = nullptr;
		switch (type)
		{
		case Normal:p_CashSuper = new CashNormal();
			break;
		case Rebate:p_CashSuper = new CashRebate(0.8);
			break;
		case Return:p_CashSuper = new CashReturn(300, 100);
			break;
		}
	}
	double getResult(double money)
	{
		return p_CashSuper->acceptCash(money);
	}
	~CashContext()
	{
		delete p_CashSuper;
	}
};
#endif