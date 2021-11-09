/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:13:35 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/09 13:09:44 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(std::string givenName)
{
	std::cout << "ClapTrap constructor has been called" << std::endl;
	name = givenName;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor has been called" << std::endl;
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap " << this->name;
	std::cout << " attack " << target;
	std::cout << ", causing " << this->attackDamage << " points of damage!";
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name;
	std::cout << " took " << amount << " points of damage!";
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name;
	std::cout << " repaired itself with " << amount << " point!";
	std::cout << std::endl;
}

