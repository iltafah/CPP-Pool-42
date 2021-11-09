/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 08:52:17 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/09 15:44:00 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string givenName) : ClapTrap(givenName)
{
	std::cout << "ScavTrap constructor has been called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor has been called" << std::endl;
}

void	ScavTrap::attack(std::string const& target)
{
	std::cout << "ScavTrap " <<  name;
	std::cout << " attack " << target;
	std::cout << ", causing " <<  attackDamage << " points of damage!";
	std::cout << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap has entered in Gate keeper mode!" << std::endl;
}