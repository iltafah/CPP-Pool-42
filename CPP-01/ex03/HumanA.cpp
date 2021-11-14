/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:44:32 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/14 15:41:29 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"

HumanA::HumanA(std::string givenName, Weapon& givenWeapon) : weapon(givenWeapon)
{
	this->name = givenName;
	std::cout << GREEN;
	std::cout << "HumanA parameterized constructor has been called" << std::endl;
	std::cout << RESET;
}

HumanA::~HumanA()
{
	std::cout << RED;
	std::cout << "HumanA destructor has been called" << std::endl;
	std::cout << RESET;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
	return ;
}

