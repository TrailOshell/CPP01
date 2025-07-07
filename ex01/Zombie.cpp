/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:06:03 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/08 00:06:04 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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