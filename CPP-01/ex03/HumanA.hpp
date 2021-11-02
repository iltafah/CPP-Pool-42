/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:44:41 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/02 17:16:12 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "./Weapon.hpp"

class HumanA
{
	private:
		Weapon&	weapon;
		std::string name;
	
	public:
		HumanA(std::string givenName, Weapon& givenWeapon);
		~HumanA();
		void	attack();
};

#endif
