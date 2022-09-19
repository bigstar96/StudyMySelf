#include <iostream>

class MyArray
{
private:
	int mArray[10];

public:
	MyArray() : mArray{}
	{

	}

	int& operator[] (int index)
	{
		return mArray[index];
	}

};



int main()
{
	MyArray array1;

	array1[0] = 1;

	std::cout << array1[0] << std::endl;
	std::cout << array1[1] << std::endl;
}
