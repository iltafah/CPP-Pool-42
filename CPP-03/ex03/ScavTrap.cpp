/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 08:52:17 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/11 17:23:05 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor has been called" << std::endl;
	name = "NoName";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& givenObj)
{
	std::cout << "ScavTrap copy constructor has been called" << std::endl;
	this->name = givenObj.name;
	this->hitPoints = givenObj.hitPoints;
	this->energyPoints = givenObj.energyPoints;
	this->attackDamage = givenObj.attackDamage;
}

void	ScavTrap::operator=(const ScavTrap& givenObj)
{
	std::cout << "ScavTrap copy assignment operator has been called" << std::endl;
	this->name = givenObj.name;
	this->hitPoints = givenObj.hitPoints;
	this->energyPoints = givenObj.energyPoints;
	this->attackDamage = givenObj.attackDamage;	
}

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