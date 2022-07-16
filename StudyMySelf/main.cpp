#include <iostream>

void Print1to5()
{
	int i = 1;
	while (i <= 5)
	{
		std::cout << i++ << std::endl;
	}
	std::cout << "\n";
}

void PrintOddNumber()
{
	int i = 1;
	while (i <= 10)
	{
		if (i & 1)
		{
			std::cout << i << std::endl;
		}
		i++;
	}
	std::cout << "\n";
}

void PrintAtoZ()
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		std::cout << alphabet++ << " ";
	}
	std::cout << "\n\n";
}

void PrintMultiplicationTable()
{
	int a{ 2 }, b{ 0 };
	while (b < 9)
	{
		std::cout << a << " X " << ++b << " = " << a * b << std::endl;
	}
	std::cout << std::endl;
}

void PrintMultiplicationTable2()
{
	int a{}, b{};
	std::cout << "몇 단을 출력할까요? : ";
	std::cin >> a;
	while (b < 9)
	{
		std::cout << a << " X " << ++b << " = " << a * b << std::endl;
	}
}

void PrintMultiplicationTableAll()
{
	for (int i = 2; i < 9; ++i)
	{
		for (int j = 2; j < 9; ++j)
		{
			std::cout << i << " X " << j << " = " << i * j << std::endl;
		}
		std::cout << "\n";
	}
}

void Dice()
{
	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j < 6; j++)
		{
			if (i + j == 6)
			{
				std::cout << i << ", " << j << std::endl;
			}
		}
	}
}

void UPandDOWN()
{
	int answer{ 6 };
	int whatAnswer{};
	while (whatAnswer != answer)
	{
		std::cout << "입력 : ";
		std::cin >> whatAnswer;
		if (whatAnswer < answer)
		{
			std::cout << "더 큰 수를 입력하세요." << std::endl;
		}
		else if (whatAnswer > answer)
		{
			std::cout << "더 작은 수를 입력하세요." << std::endl;
		}
		else if (whatAnswer == answer)
		{
			std::cout << "정답!" << std::endl;
			break;
		}
	}
}

void Rectangle()
{
	int a, b;
	std::cout << "너비를 입력하세요 : ";
	std::cin >> a;
	std::cout << "높이를 입력하세요 : ";
	std::cin >> b;

	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < a; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}

void Tree()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << j;
		}
		std::cout << "\n";
	}
}

void RealTree()
{
	
}

int main()
{
	Print1to5();
	PrintOddNumber();
	PrintAtoZ();
	PrintMultiplicationTable();
	PrintMultiplicationTable2();
	PrintMultiplicationTableAll();
	Dice();
	UPandDOWN();
	Rectangle();
	Tree();

}