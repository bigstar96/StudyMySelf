#include <iostream>

// Recursive Function

int RecursiveNumber(int x)
{
	if (x < 0)
	{
		std::cout << std::endl;
		return 0;
	}

	RecursiveNumber(x - 1);
	std::cout << x << ", ";
	
}

int main()
{
	RecursiveNumber(9);

	
}