#include <iostream>

int Sum(int x, int y)
{
	return x + y;
}

int main()
{
	int x{ 1 }, y{ 2 };
	std::cout << &x << ", " << &y << std::endl;
	std::cout << Sum << ", " << main << std::endl;
	std::cout << &Sum << ", " << &main << std::endl;
	Sum(x, y);

	int array1[10];

	std::cout << array1 << ", " << &array1 << std::endl;
}