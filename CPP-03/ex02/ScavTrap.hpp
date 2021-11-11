/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 08:52:27 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/11 17:21:47 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(const ScavTrap& givenObj);
		void	operator=(const ScavTrap& givenObj);
		ScavTrap(std::string name);
		~ScavTrap();
		void	attack(std::string const& target);
		void	guardGate();
};


#endif
