#pragma once
#include "Observer.h"
#include "ConcreteSubject.h"
#include <string>
#include <iostream>

class ConcreteObserver : public Observer
{
private:
	std::string name;
	ConcreteSubject* subject;

public:
	ConcreteObserver(std::string n, ConcreteSubject* s) {
		this->name = n;
		subject = s;
	}
	void update(int state);
};

