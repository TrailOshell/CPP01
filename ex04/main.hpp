/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:41:13 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/17 15:13:21 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

int		printError(std::string text);

void	replacing(std::ofstream &fo, std::string s1, std::string s2, std::string buffer);

# ifndef DEBUG_MODE
#  define DEBUG_MODE	0
# endif

# define NCL		"\033[0m"
# define BLK		"\033[0;30m"
# define RED		"\033[0;31m"
# define GRN		"\033[0;32m"
# define YLW		"\033[0;33m"
# define BLU		"\033[0;34m"
# define PUR		"\033[0;35m"
# define CYN		"\033[0;36m"
# define WHT		"\033[0;37m"

#endif