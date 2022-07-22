#include <iostream>

double Max(double x, double y)
{
	return (x > y) ? x : y;
}

int ReadValue()
{
	std::cout << "정수를 입력하세요 : ";
	int x{};
	std::cin >> x;

	return x;
}
void WirteValue(int x)
{
	std::cout << "x : " << x << std::endl;
}

int Quotient(int a, int b)
{
	return a / b;
}
int Remainder(int a, int b)
{
	return a % b;
}

void GuGuDan(int dan)
{
	std::cout << "--- " << dan << "단" << " ---" << std::endl;

	for (int i = 1; i <= 9; ++i)
	{
		std::cout << dan << " x " << i << " = " << dan * i << std::endl;
	}
}

int main()
{
	std::cout << Max(2.31231, 3.111201) << std::endl;

	int x{ ReadValue() };
	WirteValue(x);
	std::cout << "\n";

	int a{ 7 };
	int b{ 3 };

	std::cout << a << " / " << b << " = " << std::endl;
	std::cout << "몫 : " << Quotient(a, b) << std::endl;
	std::cout << "나머지 : " << Remainder(a, b) << std::endl;
	std::cout << "\n";

	for (int i = 1; i <= 9; i++)
	{
		GuGuDan(i);
		std::cout << std::endl;
	}


}