#include <iostream>

// Recursive Function

bool Succes{ true };

enum command
{
	Left = 1,
	Midle = 2,
	Right = 3
};

const int succes[3][3]{
		{ 0, 0, 1 },
		{ 0, 0, 2 },
		{ 0, 0, 3 }
};

void PrintInfo(int hanoi[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << hanoi[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	return;
}

void Move(int hanoi[3][3], int move1, int move2)
{
	for (int i = 0; i < 3; ++i)
	{
		if (hanoi[i][move1] != 0)
		{
			for (int j = 0; j < 3; j++)
			{
				if (hanoi[j][move2] != 0)
				{
					if (hanoi[j][move2] > hanoi[j + 1][move2])
					{
						hanoi[j][move2] = hanoi[i][move1];
						hanoi[i][move1] = 0;
						return;
					}
				}

				if (hanoi[0][move2] == 0 &&
					hanoi[1][move2] == 0 &&
					hanoi[2][move2] == 0)
				{
					hanoi[2][move2] = hanoi[i][move1];
					hanoi[i][move1] = 0;
					return;
				}
			}
		}
	}
	
}

void Hanoi(int hanoi[3][3], char from, char temp, char to)
{
	

	int move1{ 0 }, move2{ 0 };
	while (Succes)
	{
		PrintInfo(hanoi);
		if (hanoi == succes)
		{
			PrintInfo(hanoi);
			std::cout << "정답입니다." << std::endl;
			return;
		}

		std::cout << "어떻게 움직일까요? ";
		std::cin >> move1 >> move2;

		switch (move2)
		{
		case Left:
			Move(hanoi, move1 - 1, move2 - 1);
			break;

		case Midle:
			Move(hanoi, move1 - 1, move2 - 1);
			break;

		case Right:
			Move(hanoi, move1 - 1, move2 - 1);
			break;

		default:
			std::cout << "잘못 입력하셨습니다." << std::endl;
			break;
		}

		if (hanoi == succes)
		{
			Succes = false;
		}
	}
	

	

	// Hanoi(hanoi, from, to, temp); // from -> temp
	// Move(from, to);
	// Hanoi(hanoi, temp, from, to); // temp -> to
	
}

int main()
{
	int hanoi[3][3]{
		{ 1, 0, 0 },
		{ 2, 0, 0 },
		{ 3, 0, 0 }
	};

	Hanoi(hanoi, 'A', 'B', 'C'); // A -> C
}
