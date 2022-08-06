#include <iostream>

int Sigma(int (*f)(int x),int m, int n)
{
	std::cout << "Sigma->f : " << &f << std::endl;

	int sum = 0;
	for (int k = m; k <= n; ++k)
	{
		sum += f(k);
	}

	return sum;
}

int NormalFunction(int x)
{
	return x;
}

int SquareFunction(int x)
{
	return x * x;
}

int main()
{
	std::cout << Sigma(NormalFunction, 1, 10) << std::endl;
	std::cout << Sigma(SquareFunction, 1, 10) << std::endl;
}