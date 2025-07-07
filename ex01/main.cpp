#include "Zombie.hpp"

std::string	start_div(void)
{
	return (YLW "- -- ---" NCL);
}

std::string	end_div(void)
{
	return (YLW "--- -- -" NCL);
}

std::string run_div(std::string text)
{
	return (start_div() + text + end_div());
}

int main(void)
{
	std::cout << run_div(GRN "Begin the program") << std::endl;

	std::cout << GRN << "The hoard is coming!" << end_div() << std::endl;
	Zombie *z = zombieHorde(3, "hoardling");
	std::cout << YLW << "The hoard annouce itself" << end_div() << std::endl;
	z->announce();
	std::cout << YLW << "The hoardlings annouce themself" << end_div() << std::endl;
	z[0].announce();
	z[1].announce();
	z[2].announce();
	std::cout << YLW << "Unnamed hoardling tried to announce itself" << end_div() << std::endl;
	z[10].announce();
	std::cout << RED << "delete[]" << end_div() << std::endl;
	delete[] z;

	std::cout << run_div(PUR "  End of program   ") << std::endl;
	return 0;
}