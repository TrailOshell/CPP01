/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:13:08 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/08 01:13:12 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string weapon);
		~Weapon();
		std::string getType() const;
		void setType(std::string new_type);

};

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