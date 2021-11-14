/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:44:08 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/14 15:42:28 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

Weapon::Weapon(std::string givenType)
{
	this->type = givenType;
	std::cout << GREEN;
	std::cout << "Weapon parameterized constructor has been called" << std::endl;
	std::cout << RESET;
}

Weapon::~Weapon()
{
	std::cout << RED;
	std::cout << "Weapon destructor has been called" << std::endl;
	std::cout << RESET;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}

const std::string&	Weapon::getType(void) const
{
	return (this->type);
}
