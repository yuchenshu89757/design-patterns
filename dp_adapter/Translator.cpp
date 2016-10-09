#include "Translator.h"

Translator::Translator() = default;

Translator::~Translator() = default;

void Translator::attack(){
	this->fire();
}

void Translator::defense(){
	this->back();
}