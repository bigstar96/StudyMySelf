#include <iostream>	

int GetLength(char* pc)
{
	int count{ 0 };

	while (*pc != '\0')
	{
		count++;
		pc++;
	}

	return count;
}

int main()
{
	char input[1000];

	std::cin >> input;

	std::cout << input << " : " << GetLength(input) << std::endl;
}
