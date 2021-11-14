/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:17:12 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/14 15:18:27 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor has been called" << std::endl;
	name = "NoName";
	hitPoints = 0;
	energyPoints = 0;
	attackDamage = 0;
}

DiamondTrap::DiamondTrap(const DiamondTrap& givenObj)
{
	std::cout << "DiamondTrap copy constructor has been called" << std::endl;
	this->name = givenObj.name;
	this->hitPoints = givenObj.hitPoints;
	this->energyPoints = givenObj.energyPoints;
	this->attackDamage = givenObj.attackDamage;
}

void	DiamondTrap::operator=(const DiamondTrap& givenObj)
{
	std::cout << "DiamondTrap copy assignment operator has been called" << std::endl;
	this->name = givenObj.name;
	this->hitPoints = givenObj.hitPoints;
	this->energyPoints = givenObj.energyPoints;
	this->attackDamage = givenObj.attackDamage;
}

DiamondTrap::DiamondTrap(std::string givenName) : name(givenName), 
	ClapTrap(givenName + "_clap_name"),
	FragTrap(givenName + "_clap_name"),
	ScavTrap(givenName + "_clap_name")
{
	std::cout << "DiamondTrap constructor has been called" << std::endl;
	this->energyPoints = 50;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor has been called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is <" << this->name << ">" << std::endl;
	std::cout << "ClapTrap name is <" << ClapTrap::name << ">" << std::endl;
}