#include <iostream>

typedef int (*FunctionPointer)(float); // C-Type
using FunctionPoint = int(*)(float);

int MyFunction(float f)
{
	return 0;
}


int main()
{
	FunctionPointer funcPtr = MyFunction;
	FunctionPoint Funcptr = MyFunction;
}