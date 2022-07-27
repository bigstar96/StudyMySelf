#include <iostream>

// Recursive Function


int Factorial(int x)
{
	
	if (x < 1)
	{
		return 1;
	}
	return x * Factorial(x - 1);
}

int main()
{
	int factorial;
	std::cin >> factorial;

	std::cout << "!" << factorial << " = " << Factorial(factorial);
}