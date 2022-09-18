#include <iostream>

class MyClass
{
public:
	static int sCount;

	MyClass()
	{
		sCount++;
	}

	~MyClass()
	{
		sCount--;
	}

private:

};

int MyClass::sCount{ 0 };

int main()
{
	MyClass c1;
	MyClass c2;
	MyClass c3;

	std::cout << c3.sCount << std::endl;
	std::cout << MyClass::sCount << std::endl;
}