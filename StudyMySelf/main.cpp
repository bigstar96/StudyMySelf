#include <iostream>

using namespace std;

const int QUEUE_SIZE = 10;

enum Command
{
	ENQUEUE = 1,
	DEQUEUE = 2
};

struct Queue
{
	int container[QUEUE_SIZE]{};
	int head = 0;
	int tail = 0;
};

void PrintInfo()
{
	std::cout << "  <QUEUE>  " << std::endl;
	std::cout << "[1] enqueue" << std::endl;
	std::cout << "[2] dequeue" << std::endl;
	std::cout << "-----------" << std::endl;
}

void PrintQueue(Queue& queue)
{
	std::cout << "--- queue ---" << std::endl;
	if (queue.head == queue.tail)
	{
		std::cout << "-----------" << std::endl;
		std::cout << "EMPTY" << std::endl;
		return;
	}

	int i = queue.head;
	while (i != queue.tail)
	{
		i = (i + 1) % QUEUE_SIZE;
		std::cout << queue.container[i] << std::endl;
	}

	std::cout << "----------" << std::endl;
}

void Enqueue(Queue& queue, int value)
{
	if ((queue.tail + 1) % QUEUE_SIZE == queue.head)
	{
		std::cout << "Queue is FULL!" << std::endl;
		return;
	}
	queue.tail = (queue.tail + 1) % QUEUE_SIZE;
	queue.container[queue.tail] = value;
}

void Dequeue(Queue& queue)
{
	if (queue.tail == queue.head)
	{
		return;
	}
	queue.head = (queue.head + 1) % QUEUE_SIZE;
	std::cout << queue.container[queue.head] << "dequeue!" << std::endl;
}

void ProcessUserInput(Queue& queue)
{
	int command = -1;
	while (true)
	{
		PrintQueue(queue);

		std::cout << std::endl;
		std::cout << "> ";
		std::cin >> command;

		switch (command)
		{
		case ENQUEUE:
		{
			int value;
			std::cout << "  enqueue value >> ";
			std::cin >> value;
			Enqueue(queue, value);
			break;
		}

		case DEQUEUE:
			Dequeue(queue);
			break;

		default:
			std::cout << "잘못된 명령어 입니다." << std::endl;
			break;
		}
	}
}

int main()
{
	Queue myQueue;

	PrintInfo();
	ProcessUserInput(myQueue);
}