#include <iostream>	

double LinearEquation(int a, int b)
{
	return -(b / a);
}

int main()
{
	int a;
	int b;

	std::cin >> a >> b;

	std::cout << LinearEquation(a, b);
	
	return 0;
}