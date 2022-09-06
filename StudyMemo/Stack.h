#pragma once

class Stack
{
private:
	struct Element
	{
		int value;
		Element* next;
	};

	int mCount;
	Element* mTop;

public:
	Stack();
	~Stack();

	void Push(int value);
	bool Pop();
	void Print() const;
};

