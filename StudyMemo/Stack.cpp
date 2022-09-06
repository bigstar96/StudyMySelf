#include "Stack.h"
#include <iostream>

Stack::Stack() : mCount{ 0 }, mTop{ nullptr }
{
}

Stack::~Stack()
{
	Element* element = mTop;
	Element* next = nullptr;

	while (element != nullptr)
	{
		next = element->next;
		delete element;
		element = next;
	}
}

void Stack::Push(int value)
{
	Element* element = new Element();
	element->value = value;

	element->next = mTop;
	mTop = element;
	mCount++;
}

bool Stack::Pop()
{
	if (mCount == 0)
	{
		std::cout << "STACK is EMPTY!" << std::endl;
		return false;
	}

	Element* prevTop = mTop;
	int value = prevTop->value;

	mTop = prevTop->next;
	mCount--;

	delete prevTop;

	std::cout << "POP : " << value << std::endl;

	return true;
}

void Stack::Print() const
{
	Element* element = mTop;

	while (element != nullptr)
	{
		std::cout << element->value << std::endl;
		element = element->next;
	}
}
