/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:05:00 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/08 00:05:06 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void print_div(std::string text)
{
	std::cout << std::endl;
	std::cout <<  YLW "- -- --- " NCL + text + YLW " --- -- -" NCL;
	std::cout << std::endl;
}


int main(void)
{
	print_div(CYN "CPP01 ex00");
	print_div(GRN "Program start");
	
	print_div(GRN "newZombie()");
	Zombie *z = newZombie("Fresh new rotten zombie");

	print_div(GRN "announce()");
	z->announce();
	delete z;

	print_div(YLW "randomChump()");
	randomChump("Random chumping zombie");

	print_div(RED "Program ended");
	return 0;
}