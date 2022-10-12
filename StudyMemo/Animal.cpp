#include <iostream>
#include "Animal.h"

Animal::~Animal()
{
	std::cout << "[Animal] destroyed!" << std::endl;
}

Animal::Animal() : mAge{ 1 }, mWeight{ 1 }
{
	std::cout << "[Animal] created!" << std::endl;
}

Animal::Animal(int age, int weight) : mAge{ age }, mWeight{ weight }
{
	std::cout << "[Animal(int, int) created!" << std::endl;
}

int Animal::GetAge() const
{
	return mAge;
}

int Animal::GetWeight() const
{
	return mWeight;
}

void Animal::SetAge(int age)
{
	mAge = age;
}

void Animal::SetWeight(int weight)
{
	mWeight = weight;
}

void Animal::Sound()
{
	std::cout << "Make a noise..." << std::endl;
}
