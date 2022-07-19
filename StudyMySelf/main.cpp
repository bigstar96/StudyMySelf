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
	/*	
	int Scores[10]{};
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "score [" << i + 1 << "] : ";
		std::cin >> Scores[i];
	}

	int high{0}, low{100};
	for (int i = 0; i < 10; ++i)
	{
		if (high < Scores[i])
		{
			high = Scores[i];
		}
		if (low > Scores[i])
		{
			low = Scores[i];
		}
	}
	std::cout << "최고점 : " << high << std::endl;
	std::cout << "최저점 : " << low << std::endl;
	*/

	// 2번 문제
	int Scores[10]{};
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "score [" << i + 1 << "] : ";
		std::cin >> Scores[i];
	}


}