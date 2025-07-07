#include "Zombie.hpp"

int main(void)
{
	std::cout << YLW << "- -- ---" << CYN << " Begin the program " << YLW << "--- -- -" << NCL << std::endl;

	std::cout << GRN << "Using newZombie()" << NCL << std::endl;
	Zombie *z = newZombie("Fresh new rotten zombie");
	z->announce();
	delete z;

	std::cout << YLW << "Using randomChump()" << NCL << std::endl;
	randomChump("Random chumping zombie");

	std::cout << YLW << "- -- ---" << PUR << "  End of program   " << YLW << "--- -- -" << NCL << std::endl;
	return 0;
}