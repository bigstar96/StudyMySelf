#include <iostream>
#include "String.h"


String::String(const char* string) :
	mString{},
	mLength{}
{
	mLength = 0;
	while (string[mLength] != '\0')
	{
		mLength++;
	}

	mString = new char[mLength + 1];

	for (int i = 0; i < mLength; ++i)
	{
		mString[i] = string[i];
	}

	mString[mLength] = '\0';
}

String::~String()
{
	delete[] mString;
	mString = nullptr;

	mLength = 0;
}

void String::Print()
{
	std::cout << mString;
}
