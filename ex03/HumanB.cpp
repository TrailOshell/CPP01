/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:13:11 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/17 15:07:18 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << CYN + _name;
	std::cout << YLW " attacks with their ";
	if (_weapon)
		std::cout << CYN + _weapon->getType() << std::endl;
	else 
		std::cout << CYN "lack of weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}
