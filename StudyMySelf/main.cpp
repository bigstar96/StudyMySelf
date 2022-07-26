#include <iostream>
#include <time.h>

// 숫자 야구 게임

int main()
{
	int countBall[3]{};
	int userBall[3]{};
	int count{1};
	
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 3; i++)
	{
		countBall[i] = (rand() % 9) + 1;
		for (int j = 0; j < i; j++)
		{
			if (countBall[i] == countBall[j] && i != j)
			{
				i--;
			}
		}
	}

	while (true)
	{
		std::cout << "[" << count << "회차 숫자야구]" << std::endl;
		while (true)
		{
			std::cout << "1부터 9까지의 숫자를 입력하세요 : ";
			std::cin >> userBall[0] >> userBall[1] >> userBall[2];
			if (userBall[0] < 1 || userBall[0] > 9 ||
				userBall[1] < 1 || userBall[1] > 9 ||
				userBall[2] < 1 || userBall[2] > 9)
			{
				std::cout << "범위 외의 숫자를 입력하시면 안됩니다." << std::endl;
				continue;
			}
			else if (userBall[0] == userBall[1] ||
				userBall[0] == userBall[2] ||
				userBall[1] == userBall[2])
			{
				std::cout << "중복된 숫자를 입력하시면 안됩니다." << std::endl;
				continue;
			}
			break;
		}
		int strike{};
		int ball{};
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (countBall[i] == userBall[j])
				{
					if (i == j)
					{
						strike++;
					}
					else
					{
						ball++;
					}
				}
			}
		}

		if (strike || ball)
		{
			std::cout << "[결과]" << std::endl << 
				"스트라이크 : " << strike << std::endl << 
				"볼 : " << ball << std::endl;
		}
		else
		{
			std::cout << "[결과]" << std::endl << "아웃!" << std::endl;
		}

		if (strike == 3)
		{
			std::cout << " 승리! " << std::endl;
			break;
		}
		else if (count == 20)
		{
			std::cout << "포기..." << std::endl;
			break;
		}
		count++;
	}
	return 0;
}
