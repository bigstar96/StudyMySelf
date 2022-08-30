#pragma once

class String
{
	char* mString;
	int mLength;

public:
	String(const char* string);
	~String();

	void Print();
};

