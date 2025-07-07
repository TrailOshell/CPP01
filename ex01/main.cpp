#include "Zombie.hpp"

std::string	start_div(void)
{
	return (YLW "- -- --- " NCL);
}

std::string	end_div(void)
{
	return (YLW " --- -- -" NCL);
}

std::string run_div(std::string text)
{
	return (start_div() + text + end_div());
}

int main(void)
{
	std::cout << run_div(GRN "Begin the program") << std::endl;

	std::cout << std::endl;

	std::cout << run_div(GRN "The hoard is coming!") << std::endl;
	Zombie *z = zombieHorde(3, "hoardling");

	std::cout << std::endl;

	std::cout << run_div(YLW "The hoard annouce itself") << std::endl;
	z->announce();

	std::cout << std::endl;

	std::cout << run_div(YLW "The hoardlings annouce themself") << std::endl;
	z[0].announce();
	z[1].announce();
	z[2].announce();

	std::cout << std::endl;

	std::cout << run_div(YLW "Unnamed hoardling tried to announce itself") << std::endl;
	z[10].announce();

	std::cout << std::endl;

	std::cout << run_div(RED "delete[]") << std::endl;
	delete[] z;

	std::cout << std::endl;

	std::cout << run_div(PUR "  End of program   ") << std::endl;
	return 0;
}