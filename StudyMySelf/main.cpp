#include <iostream>	

using comparison = bool(*)(int, int);

// 오름차순
bool Asscending(int x, int y)
{
	return x > y;
}

// 내림차순
bool Descending(int x, int y)
{
	return x < y;
}

void Sort(int numbers[], int count, comparison f)
{
	int temp{};

	for (int i = 0; i < count; ++i)
	{
		for (int j = i + 1; j < count; ++j)
		{
			if (f(numbers[i], numbers[j]))
			{
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
}

int main()
{
	const int NumArray = 10;
	int scores[NumArray]{ 20,10,40,15,30 };

	Sort(scores, NumArray, Asscending);

	for (auto e : scores)
	{
		std::cout << e << ", ";
	}
}