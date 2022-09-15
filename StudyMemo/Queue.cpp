#include "Queue.h"
#include <iostream>

Queue::Queue() : mCount{ 0 }, mFront{ nullptr }, mRear{ nullptr }
{
}

Queue::~Queue()
{
    Element* element = mFront;
    Element* next = nullptr;

    while (element != nullptr)
    {
        next = element->next;
        delete element;
        element = next;
    }
}

void Queue::Enqueue(int value)
{
    Element* element = new Element;
    element->value = value;
    element->next = nullptr;

    if (mCount == 0)
    {
        mFront = element;
        mRear = element;
    }
    else
    {
        mRear->next = element;
        mRear = element;
    }

    mCount++;
}

bool Queue::Dequeue()
{
    if (mCount == 0)
    {
        std::cout << "QUEUE is EMPTY!" << std::endl;
        return false;
    }

    Element* element = mFront;
    
    std::cout << "dequeue : " << element->value << std::endl;

    mFront = element->next;

    delete element;
    mCount--;
    
    if (mCount == 0)
    {
        mCount = 0;
        mFront = mRear = nullptr;
    }

    return false;
}

void Queue::Print() const
{
    Element* element = mFront;

    while (element != nullptr)
    {
        std::cout << element->value << std::endl;
        element = element->next;
    }
}
