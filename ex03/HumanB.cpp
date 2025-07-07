/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:13:11 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/08 01:15:14 by tsomchan         ###   ########.fr       */
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
	std::cout << CYN + _name << YLW " attacks with their " << CYN + _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}