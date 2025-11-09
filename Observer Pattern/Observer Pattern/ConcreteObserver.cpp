#include "ConcreteObserver.h"

void ConcreteObserver::update(int state)
{
	std::cout << name << "이(가) 상태를 감지. 새 값 : " << state << std::endl;
}
