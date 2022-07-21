#include <iostream>



int main()
{
	// 1번 문자열을 입력받아 거꾸로 출력
	/*
	char name[7]{};
	std::cin >> name;

	for (int i = sizeof(name); i >= 0; i--)
	{
		std::cout << name[i];
	}
	*/

	// 2번 두 문자열을 입력하여 하나의 문자열로 만들어 출력합시다.
	/*
	char name1[7]{};
	char name2[7]{};
	std::cin >> name1 >> name2;

	char result[sizeof(name1) + sizeof(name2)]{};

	for (int i = 0; i < sizeof(name2); i++)
	{
		result[i] = name1[i];
		result[sizeof(name2) + i] = name2[i];
	}

	for (int i = 0; i < sizeof(name3); i++)
	{
		std::cout << name3[i];
	}
	*/

	// 3번 문자열을 입력받아 모두 대문자로 출력하는 프로그램을 만들어 봅시다.
	/*
	char name4[7]{};
	std::cin >> name4;

	for (int i = 0; i < sizeof(name4)-1; i++)
	{
		name4[i] = name4[i] - 32;
	}
	for (int i = 0; i < sizeof(name4); i++)
	{
		std::cout << name4[i];
	}
	*/

	// 4번 테트리스 블록을 회전해 봅시다.
	/*
	int block[3][3] = {
		{0,1,0},
		{0,1,1},
		{0,1,0}
	};
	
	int rotBlock[3][3]{};

	enum Command
	{
		LEFT = 1,
		RIGHT = 2,
		EXIT = 3
	};
	int command{};
	while (true)
	{
		for (int y = 0; y < 3; ++y)
		{
			for (int x = 0; x < 3; ++x)
			{
				std::cout << block[y][x] << " ";
			}
			std::cout << std::endl;
		}

		std::cout << "명령 : ";
		std::cin >> command;

		int newX{}, newY{};

		for (int y = 0; y < 3; ++y)
		{
			for (int x = 0; x < 3; ++x)
			{
				if (command == LEFT)
				{
					newX = y;
					newY = 2 - x;
				}
				else if (command == RIGHT)
				{
					newX = 2 - y;
					newY = x;
				}

				rotBlock[newY][newX] = block[y][x];
			}
		}

		for (int y = 0; y < 3; ++y)
		{
			for (int x = 0; x < 3; ++x)
			{
				block[y][x] = rotBlock[y][x];
			}
		}

		if (command == EXIT)
		{
			break;
		}
	}
	*/

	

}