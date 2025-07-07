/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:13:11 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/08 01:20:39 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << CYN + _name;
	std::cout << YLW " attacks with their ";
	std::cout << CYN + _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}
