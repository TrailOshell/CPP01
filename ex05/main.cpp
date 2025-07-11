/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 04:26:20 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/11 23:15:21 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("invalid");
	if (DEBUG_MODE == 1)
	{
		std::cout << YLW "- -- --- NULL --- -- -" NCL << std::endl;
		try 
		{
			harl.complain(NULL);
		}
		catch (...)
		{
			std::cout << "NULL test would've been here" << std::endl;
		}
		std::cout << YLW "- -- --- 0 --- -- -" NCL << std::endl;
		try
		{
			harl.complain(0);
		}
		catch(...)
		{
			std::cout << "0 test would've been here" << std::endl;
		}
	}
	return (0);
}