
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdio>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
};

Zombie* zombieHorde(int N, std::string name);

# define NCL		"\033[0m"
# define BLK		"\033[0;30m"
# define RED		"\033[0;31m"
# define GRN		"\033[0;32m"
# define YLW		"\033[0;33m"
# define BLU		"\033[0;34m"
# define PUR		"\033[0;35m"
# define CYN		"\033[0;36m"
# define WHT		"\033[0;37m"

#endif