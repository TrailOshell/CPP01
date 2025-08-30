/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:38:12 by tsomchan          #+#    #+#             */
/*   Updated: 2025/08/30 17:37:22 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int		printError(std::string text)
{
	std::cout << text << std::endl;
	return (1);
}

void	replacing(std::ofstream &fo, std::string s1, std::string s2, std::string buffer)
{
	size_t	pos = buffer.find(s1);

	if (pos == std::string::npos)
	{
		fo << buffer;
		return ;
	}
	fo << buffer.substr(0, pos);
	fo << s2;
	replacing(fo, s1, s2, buffer.substr(pos + s1.length()));
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (printError(YLW"wrong input: " CYN"Must input as " WHT"./replacer <file_name> <search> <replace>" NCL));
	
	std::ifstream  fi;
	std::ofstream  fo;
	fi.open(argv[1]);
	if (!fi)
		return (printError("Failed to open fileIn"));
	fo.open(((std::string)argv[1] + ".replace").c_str(), std::fstream::out);
	if (!fo)
	{
		fi.close();
		return (printError("Failed to open fileOut"));
	}
	
	std::string buffer;
	while (std::getline(fi, buffer))
		replacing(fo, argv[2], argv[3], buffer + '\n');
	
	fi.close();
	fo.close();
	return (0);
}