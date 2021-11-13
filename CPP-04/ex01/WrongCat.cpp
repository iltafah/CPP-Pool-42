/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:32:30 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/13 16:34:57 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor has been called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& givenObj)
{
	std::cout << "WrongCat Copy constructor has been called" << std::endl;
	this->type = givenObj.type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deconstractor has been called" << std::endl;
}

void	WrongCat::operator=(const WrongCat& givenObj)
{
	std::cout << "WrongCat Copy assignment operator has been called" << std::endl;
	this->type = givenObj.type;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow Meow!" << std::endl;
}
