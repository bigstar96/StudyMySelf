#include <iostream>

// Recursive Function

void Fibonacci(int number, int number2)
{
	if (number2 < number)
	{
		return;
	}

	if (number == 1)
	{
		return 1;
	}
	if (number == 2)
	{
		return 1;
	}
	
	std::cout << Fibonacci(number - 1, number2) + Fibonacci(number - 2, number2) << " ";
}

int main()
{
	int number;
	std::cin >> number;

	Fibonacci(number, number);
}