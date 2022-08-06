#include <iostream>

void PrintValue(const int& x)
{
	std::cout << x << std::endl;
}

int main()
{
	int x{ 10 };

	PrintValue(x);

	const int y{ 20 };
	PrintValue(y);
	PrintValue(30);
	PrintValue(40 + 50);

}