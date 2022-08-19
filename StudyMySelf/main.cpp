#include <iostream>

using namespace std;

const int STACK_SIZE = 10;

enum Command
{
	PUSH = 1,
	POP = 2
};

struct Stack
{
	int container[STACK_SIZE]{};
	int topIndex = -1;
};

void PrintInfo()
{
	std::cout << " <STACK> " << std::endl;
	std::cout << "[1] push" << std::endl;
	std::cout << "[2] pop" << std::endl;
	std::cout << "---------" << std::endl;
}

void PrintStack(Stack& stack)
{
	std::cout << "---stack---" << std::endl;
	if (stack.topIndex < 0)
	{
		std::cout << "-----------" << std::endl;
		std::cout << "EMPTY" << std::endl;
		return;
	}

	for (int i = stack.topIndex; i >= 0; --i)
	{
		std::cout << stack.container[i] << std::endl;
	}
	std::cout << "----------" << std::endl;
}

void Push(Stack& stack, int value)
{
	if (stack.topIndex >= STACK_SIZE - 1)
	{
		std::cout << "Stack is FULL!" << std::endl;
		return;
	}

	stack.container[++stack.topIndex] = value;
}

void Pop(Stack& stack)
{
	if (stack.topIndex < 0)
	{
		return;
	}

	std::cout << stack.container[stack.topIndex--] << " pop! " << std::endl;
}

void ProcessUserInput(Stack& stack)
{
	int command = -1;
	while (true)
	{
		PrintStack(stack);

		std::cout << std::endl;
		std::cout << "> ";
		std::cin >> command;

		switch (command)
		{
		case PUSH:
		{
			int value;
			std::cout << "  push value >> ";
			std::cin >> value;
			Push(stack, value);
			break;
		}

		case POP:
			Pop(stack);
			break;

		default:
			std::cout << "잘못된 명령어 입니다." << std::endl;
			break;
		}
	}
}

int main()
{
	Stack myStack;

	PrintInfo();
	ProcessUserInput(myStack);
}