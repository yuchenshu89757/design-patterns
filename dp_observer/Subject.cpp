#include "Subject.h"

void Subject::attach(Observer *ob){
	_observers.push_back(ob);
}

void Subject::detach(Observer *ob){
	_observers.remove(ob);
}

Subject::~Subject() = default;