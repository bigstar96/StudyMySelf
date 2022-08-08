#include <iostream>	



int main()
{
	char myString[] = "Doggy";
	char* p = myString;

	std::cout << p << std::endl;

	int myInteger = 5;
	char myString2[] = { " is integer value." };
	std::cout << myString2 + myInteger << std::endl;
}
