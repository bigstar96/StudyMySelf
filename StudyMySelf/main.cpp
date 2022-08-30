#include <iostream>

class Quest
{

private:
	int mID{ 1 };
	int mExp{ 1 };

public:
	Quest() : mID{ 1 }, mExp{ 1 }
	{
		// 1 : 기본 퀘스트 초기화
	}
	Quest(std::string excel) : mID{ 2 }, mExp{ 2 }
	{
		// 1 : 기본 퀘스트 초기화
		Quest();
		
		// 2 : 엑셀에서 퀘스트 정보 가져온 후
	}
	

	void Print()
	{
		std::cout << "QuestID : " << mID << std::endl;
		std::cout << "EXP : " << mExp << std::endl;
	}
};


int main()
{
	Quest q1 = Quest("1.xlsx");

	q1.Print();
}