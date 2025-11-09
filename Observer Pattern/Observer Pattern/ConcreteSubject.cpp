#include "ConcreteSubject.h"

void ConcreteSubject::attach(Observer* o)
{
	observers.push_back(o);
}

void ConcreteSubject::detach(Observer* o)
{
	for (auto it = observers.begin(); it != observers.end(); it++) {
		if (*it == o) {
			observers.erase(it);
			break;
		}
	}
}

void ConcreteSubject::notify()
{
	for (auto observer : observers) {
		observer->update(state);
	}
}

void ConcreteSubject::setState(int newState)
{
	state = newState;
	notify();
}

int ConcreteSubject::getState() const {return state;}
