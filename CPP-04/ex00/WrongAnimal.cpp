/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:24:25 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/13 16:32:25 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor has been called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& giveObj)
{
	std::cout << "WrongAnimal Copy constructor has been called" << std::endl;
	this->type = giveObj.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor has been called" << std::endl;
}

void	WrongAnimal::operator=(const WrongAnimal& givenObj)
{
	std::cout << "WrongAnimal Copy assignment operator has been called" << std::endl;
	this->type = givenObj.type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal makes a sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
