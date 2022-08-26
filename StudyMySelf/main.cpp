#include <iostream>

class Inventory
{
private:
	std::string items[10];

public:
	std::string GetItem(int index)
	{
		if (index < 0 || index >= 10)
		{
			return "Invalid";
		}

		return items[index];
	}
};


int main()
{
	Inventory inv;

	std::cout << inv.GetItem(9);
}