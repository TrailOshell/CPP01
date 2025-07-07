#include "Zombie.hpp"

Zombie::Zombie()
{
	//std::cout << CYN << "A zombie" << GRN << " is created" << NCL << std::endl;
}

Zombie::~Zombie()
{
	std::cout << CYN + _name + RED " is destroyed" NCL << std::endl;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}

void Zombie::announce(void)
{
	std::cout << CYN + _name + ": ";
	std::cout << RED "Braiiiiiii" GRN "nnnzzzZ..." << std::endl;
}