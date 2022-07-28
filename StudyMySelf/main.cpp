#include <iostream>

// Recursive Function

void Move(char from, char to, int n)
{
	std::cout << n << "의 원판을" << from << "에서" << to << "로 옮깁니다." << std::endl;
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
	std::cout << "원판의 갯수를 입력하세요 : ";
	std::cin >> number;
	Hanoi(number, 'A', 'B', 'C'); // A -> C
}