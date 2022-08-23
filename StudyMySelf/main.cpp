#include <iostream>

const int NAME_LENGTH = 16;

struct Monster
{
	char Name[NAME_LENGTH];
	int HP;

	Monster* next;
};

struct Monster2
{
	char Name[NAME_LENGTH];
	int HP;

	Monster* prev;
	Monster* next;
};

struct MonsterList
{
	Monster* head = nullptr;
	Monster* tail = nullptr;
};

Monster* CreateMonster(MonsterList& list, const char* name, const int hp)
{
	Monster* element = new Monster();

	strcpy_s(element->Name, NAME_LENGTH, name);
	element->HP = hp;

	if (list.tail == nullptr)
	{
		list.head = element;
		list.tail = element;
	}
	else
	{
		list.tail->next = element;
		list.tail = element;
	}

	return element;
}

int GetCountMonsterList(MonsterList& list)
{
	Monster* element = list.head;
	int count{};

	while (element != nullptr)
	{
		count++;
		element = element->next;
	}

	return count;
}

void PrintMonsterList(MonsterList& list)
{
	Monster* element = list.head;

	while (element != nullptr)
	{
		std::cout << element->Name << " : " << element->HP << std::endl;
		element = element->next;
	}
}

void PrintListRecursive(Monster* monster)
{
	if (monster == nullptr)
	{
		return;
	}
	else
	{
		std::cout << monster->Name << " : " << monster->HP << std::endl;
		PrintListRecursive(monster->next);
	}
}

Monster* FindMonster(MonsterList& list, const char* name)
{
	Monster* result = nullptr;
	Monster* element = list.head;

	while (element != nullptr)
	{
		if (strcmp(element->Name, name) == 0)
			return element;

		element = element->next;
	}

	return nullptr;
}

void DeleteList(MonsterList& list)
{
	Monster* element = list.head;
	Monster* next;

	while (element != nullptr)
	{
		next = element->next;
		delete element;

		element = next;
	}

	list.head = nullptr;
	list.tail = nullptr;
}

bool Delete(MonsterList& list, const char* name)
{
	Monster* element = list.head;
	Monster* previous = nullptr;

	while (element != nullptr)
	{
		if (strcmp(element->Name, name) == 0)
		{
			break;
		}

		previous = element;
		element = element->next;
	}

	if (element == nullptr)
	{
		return false;
	}
	if (list.head == list.tail)
	{
		// 하나만 있는 리스트를 지울때
		list.head = list.tail = nullptr;
	}
	else if (previous == nullptr)
	{
		// 가장 첫 원소
		list.head = element->next;
	}
	else if (element == list.tail)
	{
		// 가장 마지막 원소
		previous->next = nullptr;
		list.tail = previous;
	}
	else
	{
		// 중간 원소
		previous->next = element->next;
	}

	delete element;

	return true;
}

int main()
{
	MonsterList myList;

	Monster* newMonster = nullptr;

	CreateMonster(myList, "Demon", 100);
	CreateMonster(myList, "Wolf", 10);
	CreateMonster(myList, "Slime", 5);

	PrintListRecursive(myList.head);
	std::cout << GetCountMonsterList(myList) << std::endl;

	Delete(myList, "Wolf");
	PrintListRecursive(myList.head);
	std::cout << GetCountMonsterList(myList) << std::endl;

	Delete(myList, "Slime");
	PrintListRecursive(myList.head);
	std::cout << GetCountMonsterList(myList) << std::endl;

	Delete(myList, "Demon");
	PrintListRecursive(myList.head);
	std::cout << GetCountMonsterList(myList) << std::endl;

	DeleteList(myList);
}