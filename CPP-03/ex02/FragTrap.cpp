/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:52:29 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/09 14:09:50 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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