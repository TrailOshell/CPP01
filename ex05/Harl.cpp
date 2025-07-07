/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 04:26:25 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/08 05:16:24 by tsomchan         ###   ########.fr       */
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
	std::cout << YLW "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" NCL << std::endl;
}

void	Harl::info(void)
{
	std::cout << CYN "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" NCL << std::endl;
}

void	Harl::warning(void)
{
	std::cout << PUR "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here just last month." NCL << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED "This is unacceptable! I want to speak to the manager now." NCL << std::endl;
}

void	Harl::complain( std::string level )
{
	void	(Harl::*Harl_funcs[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const	std::string	comments[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == comments[i])
		{
			(this->*Harl_funcs[i])();
			return ;
		}
	}
	std::cout << NCL "I can't believe you messed up so bad! I got no word for you..." NCL << std::endl;
}