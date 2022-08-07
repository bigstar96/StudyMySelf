#include <iostream>	

int main()
{
	int array[10]{ 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		std::cout << &array[i] << " " << std::endl;
	}

	int* p = &array[1];
	std::cout << p << std::endl;
	p = array + 1;
	std::cout << p << std::endl;

	int sum1{}, sum2{}, sum3{};
	// 기존 방법
	for (int i = 0; i < 10; ++i)
	{
		sum1 += array[i];
	}
	// 포인터 활용
	for (int i = 0; i < 10; ++i)
	{
		sum2 += *(array + i);
	}
	// 포인터 및 for문 고급
	for (int i = 0, *p = array; i < 10; ++i, ++p)
	{
		sum3 += *p;
	}


	std::cout << sum1 << " " << sum2 << " " << sum3 << std::endl;

}