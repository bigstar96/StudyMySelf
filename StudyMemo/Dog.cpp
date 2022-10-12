#include <iostream>
#include "Dog.h"

Dog::Dog() : mBreed{ BREED::RETRIEVER }
{
	std::cout << "[Dog] created!" << std::endl;
}

Dog::Dog(int age, int weight, Dog::BREED breed) : Animal(age, weight), mBreed{ breed }
{
	std::cout << "[Dog(int, int, BREED) created!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] destroyed!" << std::endl;
}

Dog::BREED Dog::GetBreed() const
{
	return mBreed;
}

void Dog::SetBreed(Dog::BREED breed)
{
	mBreed = breed;
}

void Dog::Sound()
{
	Animal::Sound();
	std::cout << "Woof Woof..." << std::endl;
}

void Dog::Roll()
{
	std::cout << "Rolling..." << std::endl;
}
