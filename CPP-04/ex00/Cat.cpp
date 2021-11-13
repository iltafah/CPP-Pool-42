/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:37:39 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/13 16:25:09 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor has been called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& givenObj)
{
	std::cout << "Cat Copy constructor has been called" << std::endl;
	this->type = givenObj.type;
}

Cat::~Cat()
{
	std::cout << "Cat deconstractor has been called" << std::endl;
}

void	Cat::operator=(const Cat& givenObj)
{
	std::cout << "Cat Copy assignment operator has been called" << std::endl;
	this->type = givenObj.type;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow!" << std::endl;
}
