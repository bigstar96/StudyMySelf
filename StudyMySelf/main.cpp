#include <iostream>
#include <cstring>

#define _CRT_SECURE_NO_WARNINGS

class String
{
private:
	int mLength;
	char* mString;

public:
	String()
	{
		this->mLength = 0;
		this->mString = NULL;
	}

	String(const char* str)
	{
		this->mLength = strlen(str);
		this->mString = new char[this->mLength + 1];
		// strcpy(this->mString, str);
		strcpy_s(this->mString, this->mLength, str);
	}

	String(const String& copy)
	{
		this->mLength = copy.mLength;
		this->mString = new char[mLength];
		strcpy_s(this->mString, this->mLength, copy.mString);
	}

	~String()
	{
		if (this->mString != NULL)
		delete[]mString;
	}

	void GetLength(int num)
	{
		mLength = num;
	}

	void GetString(char* str)
	{
		int n = strlen(str);
		strcpy_s(this->mString, n, str);
	}

	void CopyString(char* str)
	{
		delete[] mString;

		int n = strlen(str);
		mString = new char[n + 1];
		strcpy_s(mString, n, str);
	}

	void ConcatenateString(char* str)
	{
		int n = strlen(mString) + strlen(str);
		char* p1 = new char[n + 1];

		strcpy_s(p1, n, mString);
		strcat_s(p1, n, str);

		delete[]mString;
		mString = p1;
	}

	char& operator[](const size_t& i)
	{
		return *(mString + i);
	}

	String& operator+(const String& str)
	{
		int length = strlen(str.mString);
		char* result = new char[length + 1];
		strcpy_s(result, this->mLength, this->mString);

		mLength = mLength + str.mLength;
		this->mString = new char[mLength + 1];

		for (int i = 0; i < mLength; i++)
		{
			if (i <= length)
			{
				mString[i] = result[i];
			}

			if (i > length)
			{
				mString[i] = str.mString[i - length];
			}
		}

		delete[]result;

		return *this;
	}

	String& operator+=(const String& str)
	{
		this->mLength += (str.mLength - 1);
		char* c = new char[this->mLength];

		strcpy_s(c, strlen(mString), this->mString);
		strcat_s(c, strlen(str.mString), str.mString);

		if (this->mString != NULL)
		{
			delete[]this->mString;
		}
		this->mString = c;

		return *this;
	}

	String& operator=(char* str)
	{
		CopyString(str);

		return *this;
	}

	bool operator==(const String& str)
	{
		return strcmp(this->mString, str.mString) ? false : true;
	}

	friend std::ostream& operator<<(std::ostream& os, String& str);
	friend std::istream& operator>>(std::istream& is, String& str);
};

std::ostream& operator<<(std::ostream& os, String& str)
{
	return os << str.mString;
}

std::istream& operator>>(std::istream& is, String& str)
{
	char string[100];
	is >> string;
	str = String(string);
	return is;
}

int main()
{
	// 인자없는 생성자 호출
	String plzinput;

	// 문자열을 전달받는 생성자의 호출
	String mystr1 = "Hello, My name is "; // -> String mystr1("Hello, My name is ");
	String mystr2 = "devsophia."; // -> String mystr2("devsophia.");

	// 오버로딩한 + 및 = 연산자 호출
	String mystr3 = mystr1 + mystr2; // -> String mystr3 = mystr1.operator+(mystr2);
									 // -> mystr3.operator=(+ 연산자의 반환값);

	 // 오버로딩한 >> 연산자 호출
	std::cin >> plzinput; // -> operator>>(cin, plzinput);

	// 오버로딩한 << 연산자 호출
	std::cout << plzinput << std::endl;

	std::cout << mystr1 << std::endl;
	std::cout << mystr2 << std::endl;
	std::cout << mystr3 << std::endl;

	// 오버로딩한 += 연산자 호출
	mystr1 += mystr2; // -> mystr1.operator+=(mystr2);

	std::cout << mystr1 << std::endl;

	// 오버로딩한 == 연산자 호출
	if (mystr1 == mystr3)
		std::cout << "same !" << std::endl;
	else
		std::cout << "different !" << std::endl;

	return 0;
}