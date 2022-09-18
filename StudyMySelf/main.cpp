#include <iostream>

class Sword;

class Warrior
{
public:
	void AttackWith(Sword& sword);
};

class Sword
{
	friend class Warrior;
private:
	int mAttackDamage;
public:
	Sword(int dagame) : mAttackDamage{ dagame } {}

	friend void DamageBuff(Sword& sowrd);

	friend void Warrior::AttackWith(Sword& sword);
};

void Warrior::AttackWith(Sword& sword)
{
	std::cout << "칼을 휘둘러 " << sword.mAttackDamage << "만큼 피해를 주었다!" << std::endl;
}


void DamageBuff(Sword& sword)
{
	int oldDamage = sword.mAttackDamage;

	sword.mAttackDamage = oldDamage * 2;

	std::cout << "검을 강화했다." << oldDamage << "->" << sword.mAttackDamage << std::endl;
}

int main()
{
	Sword shortSword{ 10 };
	Warrior w;

	w.AttackWith(shortSword);

	DamageBuff(shortSword);
}