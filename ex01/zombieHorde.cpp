/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:05:56 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/08 00:05:57 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "The hoard curses for providing less than 1 zombie" << std::endl;
		return (NULL);
	}
	if (name.empty())
	{
		std::cout << "The hoard curses for providing an empty name" << std::endl;
		return (NULL);
	}
	Zombie* horde = new Zombie[N];
	if (!horde)
	{
		std::cout << "The hoard failed to form itself" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
	{
		//std::cout << i << std::endl;
		horde[i].set_name(name);
	}
	return (horde);
}