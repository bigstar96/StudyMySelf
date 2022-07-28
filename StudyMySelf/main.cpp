#include <iostream>

// Recursive Function

void Move(char from, char to, int n)
{
	static int count1{ 0 };
	count1++;
	std::cout << count1 << " : " << n << "의 원판을" << from << "에서" << to << "로 옮깁니다." << std::endl;
}

void Hanoi(int n, char from, char temp, char to)
{
	if (n == 1)
	{
		Move(from, to, n);
		return;
	}
	Hanoi(n - 1, from, to, temp); // from -> temp
	Move(from, to, n);
	Hanoi(n - 1, temp, from, to); // temp -> to
	
}

int main()
{
	int number;
	Hanoi(3, 'A', 'B', 'C'); // A -> C
}