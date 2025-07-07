#include "Zombie.hpp"

std::string	start_div(void)
{
	return (YLW "- -- --- " NCL);
}

std::string	end_div(void)
{
	return (YLW " --- -- -" NCL);
}

std::string print_div(std::string text)
{
	return (start_div() + text + end_div());
}


int main(void)
{
	std::cout << print_div(CYN "CPP01 ex00") << std::endl;
	std::cout << print_div(GRN "Begin the program") << std::endl;

	std::cout << std::endl;
	
	std::cout << print_div(GRN "Using newZombie()") << std::endl;
	Zombie *z = newZombie("Fresh new rotten zombie");
	z->announce();
	delete z;

	std::cout << std::endl;
	
	std::cout << print_div(YLW "Using randomChump()") << std::endl;
	randomChump("Random chumping zombie");

	std::cout << std::endl;
	
	std::cout << print_div(PUR "  End of program   ") << std::endl;
	return 0;
}