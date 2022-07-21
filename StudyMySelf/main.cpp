#include <iostream>

/*
1. 10명의 학생들의 점수를 입력 받아 평균을 구하세요.
ex) 입력값 10,40,30,50,60,70,100,20,80,90
출력값
최고점 : 100
최저점 : 10

2. 10명의 학생들의 점수를 입력 받아 각각의 등수를 출력하세요.
ex) 입력값 10,40,30,50,60,70,100,20,80,90
	출력값 10, 7, 8, 6, 5, 4, 1, 9, 3, 2


*/

int main()
{
	// 1번 문제
	
	int Scores1[10]{};
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "score [" << i + 1 << "] : ";
		std::cin >> Scores1[i];
	}
	int total{  };
	for (int i = 0; i < 10; ++i)
	{
		total += Scores1[i];
	}
	std::cout << "평균 : " << total / 10;
	std::cout << "\n\n";
	

	// 2번 문제
	
	int Scores2[10]{};
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "score [" << i + 1 << "] : ";
		std::cin >> Scores2[i];
	}

	int high{0}, low{100};
	for (int i = 0; i < 10; ++i)
	{
		if (high < Scores2[i])
		{
			high = Scores2[i];
		}
		if (low > Scores2[i])
		{
			low = Scores2[i];
		}
	}
	std::cout << "최고점 : " << high << std::endl;
	std::cout << "최저점 : " << low << std::endl;
	

	// 3번 문제
	
	int Scores3[10]{};
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "score [" << i + 1 << "] : ";
		std::cin >> Scores3[i];
	}
	int rank[10]{};
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (Scores3[i] < Scores3[j])
			{
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << rank[i] + 1 << ", ";
	}
	

	// 4번 문제
	
	int Scores4[10]{};
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "score [" << i + 1 << "] : ";
		std::cin >> Scores4[i];
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (Scores4[i] > Scores4[j])
			{
				int change{ Scores4[i] };
				Scores4[i] = Scores4[j];
				Scores4[j] = change;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << Scores4[i] << ", ";
	}
	
}