#include <iostream>	

double linear_equation(int a, int b)
{
	if (a == 0)
	{
		throw std::logic_error("divide by zero!");
	}

	return -((double)b / a);
}

int main()
{
	try
	{
		// your code
		return 0;
	}
	catch (std::exception e)
	{
		std::cerr << "error : " << e.what() << std::endl;
		return 1;
	}
	catch (...)
	{
		std::cerr << "unknown error! " << std::endl;
		return 2;
	}

}