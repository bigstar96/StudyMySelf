#include <iostream>	



int main()
{
	char myString[5] = "test";

	std::cout << "length : " << strlen(myString) << std::endl;
	std::cout << "size : " << sizeof(myString) << std::endl;

	char compareStr[5];

	strcpy_s(compareStr, 5, "boy");
	std::cout << "Compare with " << compareStr << " : " << strcmp(myString, compareStr) << std::endl;
	
	strcpy_s(compareStr, 5, "test");
	std::cout << "Compare with " << compareStr << " : " << strcmp(myString, compareStr) << std::endl;

	strcpy_s(compareStr, 5, "word");
	std::cout << "Compare with " << compareStr << " : " << strcmp(myString, compareStr) << std::endl;
}
