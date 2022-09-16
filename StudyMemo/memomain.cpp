#include <iostream>
#include "Cat.h"

int main()
{
	Cat nacho;
	nacho.Meow();

	// dynamic allocation

	Cat* pCancho = new Cat;
	pCancho->Meow();
	delete pCancho;
}