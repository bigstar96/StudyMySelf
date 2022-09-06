#pragma once

class Queue
{
private:
	struct Element
	{
		int value;
		Element* next;
	};

	int mCount;
	Element* mFront;
	Element* mRear;

public:
	Queue();
	~Queue();

	void Enqueue(int value);
	bool Dequeue();
	void Print() const;
};

