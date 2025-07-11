/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:06:23 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/11 23:40:51 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	NCL = "\033[0m";
	std::string	YLW = "\033[0;33m";
	std::string	CYN = "\033[0;36m";

	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << CYN + "memory addresses" + NCL << std::endl;
	std::cout << YLW + "&str       -> " << CYN << &str       << NCL << std::endl;
	std::cout << YLW + "&stringPTR -> " << CYN << &stringPTR << NCL << std::endl;
	std::cout << YLW + "&stringREF -> " << CYN << &stringREF << NCL << std::endl;

	std::cout << std::endl;

	std::cout << CYN + "values" + NCL << std::endl;
	std::cout << YLW + "str         = " << CYN << str       << NCL << std::endl;
	std::cout << YLW + "stringPTR   = " << CYN << stringPTR << NCL << std::endl;
	std::cout << YLW + "stringREF   = " << CYN << stringREF << NCL << std::endl;
	return (0);
}