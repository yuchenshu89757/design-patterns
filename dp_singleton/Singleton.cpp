#include "Singleton.h"

Singleton::Singleton(){}

Singleton::~Singleton()
{
	if (instance != nullptr)
		delete instance;
}

Singleton *Singleton::instance = new Singleton;

Singleton *Singleton::GetInstance()
{
	if (instance == nullptr)
		instance = new Singleton;
	return instance;
}