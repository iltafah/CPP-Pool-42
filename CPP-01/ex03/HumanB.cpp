/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:44:49 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/14 15:40:53 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"

HumanB::HumanB(std::string givenName) : name(givenName)
{
	std::cout << GREEN;
	std::cout << "HumanB parameterized constructor has been called" << std::endl;
	std::cout << RESET;
}

HumanB::~HumanB()
{
	std::cout << RED;
	std::cout << "HumanB destructor has been called" << std::endl;
	std::cout << RESET;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon& givenWeapon)
{
	this->weapon = &givenWeapon;
	return ;
}
