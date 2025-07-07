/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:13:09 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/08 00:41:30 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	_type = weapon;
}

Weapon::~Weapon()
{
}

std::string Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(std::string new_type)
{
	_type = new_type;
}