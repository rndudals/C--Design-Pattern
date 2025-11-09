#pragma once
class Observer
{
public:
	virtual void update(int state) = 0;
	virtual ~Observer() = default;
};

