#include <iostream>	



int main()
{
	char c[6];
	char* pc;

	c[0] = 'd';
	c[1] = 'o';
	c[2] = 'g';
	c[3] = 'g';
	c[4] = 'y';

	std::cout << c << std::endl;

	pc = &c[0];

	std::cout << pc << std::endl;
}
