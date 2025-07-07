#include "Zombie.hpp"

int main(void)
{
	Zombie *z = newZombie("Fresh new rotten zombie");
	z->announce();
	delete z;
	randomChump("Random chumping zombie");
}