#include "Zombie.hpp"

int main(void)
{
	std::cout << YLW << "- -- ---" << CYN << " Begin the program " << YLW << "--- -- -" << NCL << std::endl;
	std::cout << GRN;
	Zombie *z = newZombie("Fresh new rotten zombie");
	z->announce();
	delete z;
	std::cout << NCL;
	std::cout << YLW;
	randomChump("Random chumping zombie");
	std::cout << NCL;
	std::cout << YLW << "- -- ---" << PUR << "  End of program   " << YLW << "--- -- -" << NCL << std::endl;
	return 0;
}