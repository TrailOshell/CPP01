/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:38:12 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/08 03:16:28 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#include <string>
#include <iostream>
#include <fstream>

void	replacing(std::ofstream &fo, std::string s1, std::string s2, std::string buffer)
{
	size_t	pos;
	
	pos = buffer.find(s1);
	if (pos == std::string::npos)
	{
		fo << buffer;
		return ;
	}
	else
	{
		fo << buffer.substr(0, pos);
		fo << s2;
		replacing(fo, s1, s2, buffer.substr(pos + s1.length()));
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << YLW"wrong input: " CYN"Must input as " WHT"./replace <file_name> <search> <replace>" NCL << std::endl;
		return (1);
	}
	
	std::ifstream  fi;
	std::ofstream  fo;
	fi.open(argv[1]);
	if (!fi)
	{
		std::cout << "Failed to open fileIn" << std::endl;
		return (1);
	}
	std::string file = argv[1];
	std::string fileOut = file + ".replace";
	fo.open(fileOut.c_str(), std::fstream::out);
	if (!fo)
	{
		std::cout << "Failed to open fileOut" << std::endl;
		fi.close();
		return (1);
	}
	
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string buffer;
	while (std::getline(fi, buffer))
		replacing(fo, s1, s2, buffer + '\n');
	
	fi.close();
	fo.close();
	return (0);
}