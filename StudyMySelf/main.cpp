#include <iostream>

// Recursive Function

void Move(char from, char to)
{
	std::cout << from << "에서" << to << "로 옮깁니다." << std::endl;
}

void Hanoi(int n, char from, char temp, char to)
{
	if (n == 1)
	{
		Move(from, to);
		return;
	}
	Hanoi(n - 1, from, to, temp); // from -> temp
	Move(from, to);
	Hanoi(n - 1, temp, from, to); // temp -> to
}

int main()
{
	Hanoi(10, 'A', 'B', 'C'); // A -> C
}