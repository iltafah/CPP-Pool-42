/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:13:35 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/11 17:14:44 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor has been called" << std::endl;
	name = "NoName";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &givenObj)
{
	std::cout << "ClapTrap copy constructor has been called" << std::endl;
	this->name = givenObj.name;
	this->hitPoints = givenObj.hitPoints;
	this->energyPoints = givenObj.energyPoints;
	this->attackDamage = givenObj.attackDamage;
}

void	ClapTrap::operator= (const ClapTrap &givenObj)
{
	std::cout << "ClapTrap Copy assignment operator has been called" << std::endl;
	this->name = givenObj.name;
	this->hitPoints = givenObj.hitPoints;
	this->energyPoints = givenObj.energyPoints;
	this->attackDamage = givenObj.attackDamage;
}

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
