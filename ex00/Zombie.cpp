/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:05:26 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/08 00:05:27 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string new_name)
{
	_name = new_name;
	//std::cout << _name << " is created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << CYN << _name;
	std::cout << RED << " is destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << CYN << _name;
	std::cout << ": ";
	std::cout << RED << "Braiiiiiii" << GRN << "nnnzzzZ..." << std::endl;
}