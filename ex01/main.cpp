#include "Zombie.hpp"

void print_div(std::string text)
{
	std::cout << std::endl;
	std::cout <<  YLW "- -- --- " NCL + text + YLW " --- -- -" NCL;
	std::cout << std::endl;
}

int main(void)
{
	Zombie	*hoard;
	int		count;

	print_div(CYN "CPP01 ex01");
	print_div(GRN "Program started");

	print_div(GRN "The hoard is coming!");
	count = 3;
	hoard = zombieHorde(count, "zombie");

	if (DEBUG_MODE == 1)
	{
		print_div(PUR "The hoard annouce itself");
		hoard->announce();
	}

	print_div(YLW "The zombies annouce themself");
	for (int i = 0; i < count; i++)
		hoard[i].announce();

	if (DEBUG_MODE == 1)
	{
		print_div(PUR "Unnamed zombie tried to announce itself");
		hoard[10].announce();
	}

	print_div(RED "delete[]");
	delete[] hoard;

	print_div(YLW "zombieHorde(0, \"zombie\")");
	hoard = zombieHorde(0, "zombie");

	print_div(YLW "zombieHorde(-1, \"zombie\")");
	hoard = zombieHorde(-1, "zombie");

	if (DEBUG_MODE == 1)
	{
		try
		{
			print_div(PUR "zombieHorde(3, NULL)");
			hoard = zombieHorde(3, NULL);
		}
		catch (...)
		{
			std::cout << RED "You can't just put NULL for string" NCL << std::endl;
		}
	}
	
	print_div(RED "Program ended");
	return (0);
}