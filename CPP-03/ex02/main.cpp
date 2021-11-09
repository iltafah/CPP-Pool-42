/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:13:46 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/09 14:13:49 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

int		main()
{	
	FragTrap	player("Holy Semicolon");

	player.attack("someone");
	player.takeDamage(3);
	player.beRepaired(10);
	player.highFivesGuys();

	return (0);
}
