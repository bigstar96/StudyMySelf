#include "Student.h"

Student::Student(std::string name, int score) :
	mName{ name }, mScore{ score }
{
}

void Student::Print()
{
	std::cout << mName << " : " << mScore;
}
