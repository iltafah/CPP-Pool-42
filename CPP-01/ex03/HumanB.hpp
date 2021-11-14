/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:45:04 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/14 15:38:20 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "./Weapon.hpp"

class HumanB
{
	private:
		Weapon	*weapon;
		std::string name;
	
	public:
		HumanB(std::string givenName);
		~HumanB();
		void	setWeapon(Weapon &givenWeapon);
		void	attack();
};

#endif
