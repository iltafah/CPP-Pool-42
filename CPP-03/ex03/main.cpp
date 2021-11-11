/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:13:46 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/11 08:38:36 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"
#include "./DiamondTrap.hpp"

int		main()
{	
	DiamondTrap	player("Elias");

	player.whoAmI();
	player.attack("someone");
	player.takeDamage(3);
	player.beRepaired(10);
	player.guardGate();
	player.highFivesGuys();

	return (0);
}
