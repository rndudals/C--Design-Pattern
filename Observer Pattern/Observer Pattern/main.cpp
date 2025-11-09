#include <iostream>
#include "Observer.h"
#include "ConcreteSubject.h"
#include "ConcreteObserver.h"
using namespace std;

int main() {
	ConcreteSubject subject;

	ConcreteObserver obs1("Obs1", &subject);
	ConcreteObserver obs2("Obs2", &subject);
	ConcreteObserver obs3("Obs3", &subject);

	subject.attach(&obs1);
	subject.attach(&obs2);
	subject.attach(&obs3);
	

	subject.setState(10);

	subject.detach(&obs2);
	
	subject.setState(20);
	return 0;
}