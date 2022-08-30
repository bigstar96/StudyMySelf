#pragma once
#include <iostream>

class DataClass
{
private:
	int mYear{};
	int mMonth{};
	int mDay{};

public:
	DataClass(int y, int m, int d);

	void Print();
};

