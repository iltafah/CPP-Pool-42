/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:13:46 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/09 13:50:51 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"

int		main()
{	
	ScavTrap	playerTwo("Holy Semicolon");

	playerTwo.attack("someone");
	playerTwo.takeDamage(3);
	playerTwo.beRepaired(10);
	playerTwo.guardGate();

	return (0);
}
