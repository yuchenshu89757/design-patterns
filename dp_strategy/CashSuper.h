#ifndef CASHSUPER_H
#define CASHSUPER_H
class CashSuper{
public:
	CashSuper() = default;
	virtual double acceptCash(double money)const = 0;
	virtual ~CashSuper() = default;
};
#endif