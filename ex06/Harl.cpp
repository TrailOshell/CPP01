/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 05:24:49 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/12 13:10:49 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << YLW "[ DEBUG ]" NCL << std::endl;
	std::cout << YLW "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" NCL << std::endl;
}

void	Harl::info(void)
{
	std::cout << CYN "[ INFO ]" NCL << std::endl;
	std::cout << CYN "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" NCL << std::endl;
}

void	Harl::warning(void)
{
	std::cout << PUR "[ WARNING ]" NCL << std::endl;
	std::cout << PUR "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here just last month." NCL << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED "[ ERROR ]" NCL << std::endl;
	std::cout << RED "This is unacceptable! I want to speak to the manager now." NCL << std::endl;
}

void	Harl::complain( std::string level )
{
	const	std::string	complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*Harl_funcs[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == complains[i])
		{
			switch(i)
			{
				case(0):
						(this->*Harl_funcs[0])();
						__attribute__ ((fallthrough));
				case(1):
						(this->*Harl_funcs[1])();
						__attribute__ ((fallthrough));
				case(2):
						(this->*Harl_funcs[2])();
						__attribute__ ((fallthrough));
				case(3):
						(this->*Harl_funcs[3])();
			}
			return ;
		}
	}
	std::cout << NCL "[ ??? ]" NCL << std::endl;
	std::cout << NCL "I can't believe you messed up so horrible! I got no word for you..." NCL << std::endl;
}