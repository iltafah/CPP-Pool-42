/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:17:26 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/11 17:28:13 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "./ClapTrap.hpp"
# include "./ScavTrap.hpp"
# include "./FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;

	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap& givenObj);
		void	operator=(const DiamondTrap& givenObj);
		DiamondTrap(std::string givenName);
		~DiamondTrap();
		void whoAmI();
};

#endif
