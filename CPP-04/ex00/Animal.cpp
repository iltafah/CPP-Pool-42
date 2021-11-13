/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:46:14 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/13 16:22:11 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor has been called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& givenObj)
{
	std::cout << "Animal Copy constructor has been called" << std::endl;
	this->type = givenObj.type;
}

Animal::~Animal()
{
	std::cout << "Animal Deconstructor has been called" << std::endl;
}

void	Animal::operator = (const Animal& givenObj)
{
	std::cout << "Animal Copy assignment operator has been called" << std::endl;
	this->type = givenObj.type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal makes a sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
