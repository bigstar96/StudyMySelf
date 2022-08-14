#include <iostream>	

double LinearEquation(int a, int b)
{
	if (a == 0)
	{
		std::cerr << "divide by zero";
	}
	return -((double)b / a);
}

int main()
{
	int a;
	int b;

	std::cin >> a >> b;

	std::cout << LinearEquation(a, b) << std::endl;
	
	return 0;
}