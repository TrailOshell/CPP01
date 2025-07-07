#include "Zombie.hpp"

Zombie::Zombie()
{
	//std::cout << CYN << _name << GRN << " is created" << NCL << std::endl;
}

Zombie::Zombie(std::string new_name)
{
	_name = new_name;
	//std::cout << CYN << _name << GRN << " is created" << NCL << std::endl;
}

Zombie::~Zombie()
{
	std::cout << CYN << _name << RED << " is destroyed" << NCL << std::endl;
}

void Zombie::announce(void)
{
	std::cout << CYN << _name;
	std::cout << ": ";
	std::cout << RED << "Braiiiiiii" << GRN << "nnnzzzZ..." << std::endl;
}