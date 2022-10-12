#pragma once
class Animal
{
private:
	int mAge;
	int mWeight;

public:
	~Animal();
	Animal();
	Animal(int age, int weight);

	int GetAge() const;
	int GetWeight() const;
	void SetAge(int age);
	void SetWeight(int weight);

	void Sound();
};

