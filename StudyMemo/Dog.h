#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	enum BREED
	{
		BEAGLE, DOBERMAN, BERNARD, CHIHUAHUA, HUSKY, RETRIEVER
	};

private:
	BREED mBreed;

public:
	Dog();
	Dog(int age, int weight, Dog::BREED breed);
	~Dog();

	Dog::BREED GetBreed() const;
	void SetBreed(Dog::BREED breed);

	void Sound();
	void Roll();
};

