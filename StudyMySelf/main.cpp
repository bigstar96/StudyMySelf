#include <iostream>

class String
{
private:
	int mLength;
	char* mString;

public:
	String() : mLength{}, mString{} {}

	String(int num) : mLength{ num }, mString{}
	{
		this->mString = new char[mLength + 1];
	}

	String(char* string, int length) : mLength{ length }
	{
		this->mString = new char[mLength + 1];

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

	String& operator+(const String& rhs)
	{
		int length = mLength;
		char* result = new char[length + 1];
		strcpy(result, mString);

		mLength = mLength + rhs.mLength;
		this->mString = new char[mLength + 1];

		for (int i = 0; i < mLength; i++)
		{
			if (i < length)
			{
				mString[i] = result[i];
			}

			if (i > length)
			{
				mString[i] = rhs.mString[i - length];
			}
		}

		delete[]result;

		return *this;
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