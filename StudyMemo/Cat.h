#pragma once

class Cat
{
private:
	int mAge;
	// constant member variable
	const int FOOT_COUNT = 4;

public:
	// constant member function
	void Meow();
	int GetAge() const;

};

