#include <iostream>

enum MonsterType
{
	Wolf,
	Demon,
	Slime
};

struct Monster
{
	MonsterType type;
	std::string name;
	int HP;
};

std::string GetMonsterTypeString(MonsterType type)
{
	std::string typeString{};

	switch (type)
	{
	case Wolf:
		typeString = "Wolf";
		break;

	case Demon:
		typeString = "Demon";
		break;

	case Slime:
		typeString = "Slime";
		break;

	default:
		typeString = "NONE";
		break;
	}
	return typeString;
}

void PrintMonster(Monster monster)
{
	std::cout << "Type : " << GetMonsterTypeString(monster.type) << std::endl;
	std::cout << "Name : " << monster.name << std::endl;
	std::cout << "HP : " << monster.HP << std::endl;
}

int main()
{
	Monster wolf{ Wolf, "황천늑대", 10 };
	Monster demon{ Demon, "써큐버스", 100 };

	PrintMonster(wolf);
	std::cout << std::endl;
	PrintMonster(demon);
}