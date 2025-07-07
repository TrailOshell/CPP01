/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:13:06 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/08 01:15:34 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &new_weapon):_weapon(new_weapon)
{
	_name = new_name;
	_weapon = new_weapon;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << CYN + _name << YLW " attacks with their " << CYN + _weapon.getType() << std::endl;
}
