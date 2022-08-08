#include <iostream>	

void MyFunction1();
void MyFunction2();

char gString[] = "MEMORY LAYOUT";
int gInteger;

int main()
{
	int* allocated = new int;

	MyFunction1();

	delete allocated;
}

void MyFunction1()
{
	int local;

	MyFunction2();
}

void MyFunction2()
{
	int local;
}
