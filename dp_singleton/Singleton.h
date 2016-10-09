#ifndef _SINGLETON_H
#define _SINGLETON_H
#include <string>
class Singleton{
public:
	static Singleton *GetInstance();
private:
	Singleton();
	~Singleton();
	Singleton(const Singleton&) = delete;
	Singleton &operator=(const Singleton&) = delete;

	static Singleton *instance;
};
#endif