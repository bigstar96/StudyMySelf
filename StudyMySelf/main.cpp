#include <iostream>

int main()
{
	int myInteger = 1000;
	unsigned char myCharacter = myInteger;

	std::cout << myInteger << std::endl;
	std::cout << int(myCharacter) << std::endl;


	typedef unsigned int uint;
	uint typedefUint = 1;
	
	using uint = unsigned int;
	uint usingUint = 1;


	enum attackType
	{
		PhysicalAttack,
		MagicalAttack,
		FixedAttack
	};

	attackType aT = PhysicalAttack;

	switch (aT)
	{
	case PhysicalAttack:
		break;
	case MagicalAttack:
		break;
	case FixedAttack:
		break;
	default:
		break;
	}

	enum Color {
		Red = 0xFFFF0000,
		Magenta = 0xFFFF00FF,
		Pink = 0xFFFFC0CB
	};

	bool quest1Complete = false;
	bool quest2Complete = false;
	bool quest3Complete = false;
	bool quest4Complete = false;
	if (quest1Complete && quest3Complete)
	{
		// 5번 퀘스트 시작
	}
	// 위보다 아래가 용량을 덜 잡아먹음
	int questComplete{ 0 };		// C++11 추가
	questComplete |= 1;			// questComplete |= 0b0001;		0b0001 = 1
	questComplete |= 4;			// questComplete |= 0b0100;		0b0100 = 4
	if (questComplete & 1 && questComplete & 4)
	{
		// 5번 퀘스트 시작
	}


	struct Ability {
		int HP = 100;
		int MP = 100;
		int strength = 10;
		int magic = 10;
		int defense = 10;
		int magicDefense = 10;
	};

	Ability warrior{ 1000,10 };

	union MyUnion
	{
		int i;
		float f;
		char c;
	};
	MyUnion myUnion;
	myUnion.i = 98;
	std::cout << myUnion.i << ", " << myUnion.f << ", " << myUnion.c << std::endl;
	std::cout << "\n";

	
	int scores[3];
	for (int i = 0; i < 3; ++i)
	{
		std::cout << "Input scores[" << i + 1 << "] : ";
		std::cin >> scores[i];
	}
	for (int i = 0; i < 3; ++i)
	{
		std::cout << i + 1 << " : " << scores[i] << std::endl;
	}
	int totalScore{};
	for (int i = 0; i < 3; ++i)
	{
		totalScore += scores[i];
	}
	std::cout << "Total : " << totalScore << std::endl;
	std::cout << "\n";


	int myArray[15] = {
		0,0,1,0,0,
		0,1,1,1,0,
		1,1,1,1,1
	};
	for (int i = 0; i < 15; ++i)
	{
		std::cout << myArray[i];
		if ((i + 1) % 5 == 0)
		{
			std::cout << "\n";
		}
	}
	std::cout << "\n";
	int myArray2[3][5] = {
		{ 0,0,1,0,0 },
		{ 0,1,1,1,0 },
		{ 1,1,1,1,1 }
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << myArray2[i][j];
		}
		std::cout << "\n";
	}
	std::cout << "\n";



}