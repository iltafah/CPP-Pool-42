/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:52:29 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/11 17:26:35 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor has been called" << std::endl;
	name = "NoName";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& givenObj)
{
	std::cout << "FragTrap copy constructor has been called" << std::endl;
	this->name = givenObj.name;
	this->hitPoints = givenObj.hitPoints;
	this->energyPoints = givenObj.energyPoints;
	this->attackDamage = givenObj.attackDamage;
}

void	FragTrap::operator=(const FragTrap& givenObj)
{
	std::cout << "FragTrap copy assignment operator has been called" << std::endl;
	this->name = givenObj.name;
	this->hitPoints = givenObj.hitPoints;
	this->energyPoints = givenObj.energyPoints;
	this->attackDamage = givenObj.attackDamage;
}

FragTrap::FragTrap(std::string givenName) : ClapTrap(givenName)
{
	std::cout << "FragTrap constructor has been called" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor has been called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "HIGH FIVES GUYS" << std::endl;
}