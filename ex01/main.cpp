/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:05:50 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/17 15:26:06 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void print_div(std::string text)
{
	std::cout <<  YLW "- -- --- " NCL + text + YLW " --- -- -" NCL << std::endl;
}

void zombieHorde_test(int N, std::string name)
{
	std::cout <<  YLW "- -- --- " NCL;
	std::cout << PUR "zombieHorde(" << N << ", \"" << name << "\")";
	std::cout <<  YLW " --- -- -" NCL << std::endl;
	zombieHorde(N, "zombie");
}

int main(void)
{
	Zombie	*hoard;
	int		count;

	print_div(CYN "CPP01 ex01");
	print_div(GRN "Program started");

	print_div(GRN "The hoard is coming!");
	count = 3;
	hoard = zombieHorde(count, "zombie");

	if (DEBUG_MODE == 1) print_div(PUR "The hoard annouce itself");
	if (DEBUG_MODE == 1) hoard->announce();

	print_div(YLW "The zombies annouce themself");
	for (int i = 0; i < count; i++)
		hoard[i].announce();

	if (DEBUG_MODE == 1) print_div(PUR "Unnamed zombie tried to announce itself");
	if (DEBUG_MODE == 1) hoard[10].announce();

	print_div(RED "delete[]");
	delete[] hoard;

	if (DEBUG_MODE == 1)
	{
		zombieHorde_test(0, "zombie");
		zombieHorde_test(-1, "zombie");
		zombieHorde_test(1, "");
	
		try
		{
			print_div(PUR "zombieHorde(3, NULL)");
			hoard = zombieHorde(3, NULL);
		}
		catch (...)
		{
			std::cout << RED "You can't just put NULL for string" NCL << std::endl;
		}
	}
	
	print_div(RED "Program ended");
	return (0);
}