#include <iostream>

class String
{
private:
	int mLength;
	char* mString;

public:
	String(char* string, int length) : mLength{ length }
	{
		this->mString = new char[mLength];

		strcpy(this->mString, string);
	}

	~String()
	{
		delete[]mString;
	}

	void GetLength(int num)
	{
		mLength = num;
	}

	void GetString(char* str)
	{
		strcpy(this->mString, str);
	}

	String& operator[]()
	{

	}

	String& operator+()
	{

	}

	String& operator+=(const String& str)
	{
		mLength++;
		mString++;
		return *this;
	}

	String& operator=(const String& str)
	{
		strcpy(str.mString, mString);

		return *this;
	}

};



int main()
{
	
}