#pragma once
#include <iostream>

class Student
{
private:
	std::string mName;
	int mScore;

public:
	Student(std::string name, int score);

	void Print();
};

