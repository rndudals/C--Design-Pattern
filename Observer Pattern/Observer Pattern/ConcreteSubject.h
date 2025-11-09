#pragma once
#include <vector>
#include "Observer.h"
class ConcreteSubject
{
	
private:
	int state;
	std::vector<Observer*> observers;
	
public:
	void attach(Observer* o);
	void detach(Observer* o);
	void notify();

	void setState(int newState);
	int getState() const;
};

