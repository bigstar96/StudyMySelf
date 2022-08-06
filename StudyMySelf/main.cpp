#include <iostream>

void Sort(int numbers[], int count)
{
	int temp{};

	for (int i = 0; i < count; ++i)
	{
		for (int j = i + 1; j < count; ++j)
		{
			if (numbers[i] < numbers[j])
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
	const int NumArray = 5;
	int scores[NumArray]{ 20,10,40,15,30 };

	Sort(scores, NumArray);

	int count{ 1 };
	for (auto e : scores)
	{
		if (count == NumArray)
		{
			std::cout << e;
			continue;
		}
		std::cout << e << ", ";
		count++;
	}
}