#include <iostream>
#include <chrono>

using Comparison = bool (*)(int, int);

bool Asscending(int x, int y)
{
	return x < y;
}

bool Descending(int x, int y)
{
	return x > y;
}

void Sort(int numbers[], int count, Comparison f)
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
	int scores[NumArray]{ 20,10,40,15,30,70,60,90,80,40 };

	auto startTime = std::chrono::system_clock::now();
	Sort(scores, NumArray, Descending);

	auto endTime = std::chrono::system_clock::now();

	auto duration = endTime - startTime;

	std::cout << "Sort() runs : " << duration.count() << "ms" << std::endl;
}