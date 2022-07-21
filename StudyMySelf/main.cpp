#include <iostream>
#include <iomanip>


int main()
{
	/*
	struct Student
	{
		char name[10];
		int number;
		int score;
	};

	Student tom;

	std::cout << "input name, number, score : ";
	std::cin >> tom.name >> tom.number >> tom.score;

	std::cout << "Name is : " << tom.name << "\n";
	std::cout << "Number is : " << tom.number << "\n";
	std::cout << "Score is : " << tom.score << "\n";
	*/

	/*
	int number2{ 1 };
	char name2[]{ "Doggy" };
	float average2{ 90.1f };
	char output2[256]{};

	sprintf_s(output2, sizeof(output2), "%d번 학생 %s는 평균 %.1f 입니다.", number2, name2, average2);
	puts(output2);
	return 0;
	*/

	// sstream
	bool b{ true };
	int n{ 20 };
	double d{ 10.0 };
	int n2{ -5 };

	// true : 1
	std::cout << std::boolalpha << b << " : ";
	std::cout << std::noboolalpha << b << std::endl;

	// 0x14 : 14
	std::cout << std::hex;
	std::cout << std::showbase << n << " : ";
	std::cout << std::noshowbase << n << std::endl;
	std::cout << std::dec;

	// 10.0000 : 10
	std::cout << std::showpoint << d << " : " << std::noshowpoint << d << std::endl;
	
	// +20 : 20
	std::cout << std::showpos << n << " : " << std::noshowpos << d << std::endl;

	// 0X14 : 0x14
	std::cout << std::hex << std::showbase;
	std::cout << std::uppercase << n << " : " << std::nouppercase << n << std::endl;
	std::cout << std::dec << std::noshowbase;
	
	// -   5 : -5    :    -5
	std::cout << std::setw(5) << std::internal << n2 << " : ";
	std::cout << std::setw(5) << std::left << n2 << " : ";
	std::cout << std::setw(5) << std::right << n2 << std::endl;
}