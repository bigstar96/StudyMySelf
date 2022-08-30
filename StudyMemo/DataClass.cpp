#include "DataClass.h"

DataClass::DataClass(int y, int m, int d) :
	mYear{ y }, mMonth{ m }, mDay{ d }
{
}

void DataClass::Print()
{
	std::cout << mYear << "/" <<
		mMonth << "/" <<
		mDay;
}
