/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:44:16 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/14 15:39:02 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define RESET "\033[0m"


class Weapon
{
	private:
		std::string	type;

	public:
		Weapon(std::string givenType);
		~Weapon();
		void	setType(std::string type);
		const std::string&	getType() const;
};

#endif
