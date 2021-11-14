/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:37:39 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/14 11:11:51 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor has been called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& givenObj)
{
	std::cout << "Cat Copy constructor has been called" << std::endl;
	this->type = givenObj.type;
	delete this->brain;
	if (givenObj.brain != NULL)
	{
		this->brain = new Brain();
		*(this->brain) = *(givenObj.brain);
	}
}

Cat::~Cat()
{
	std::cout << "Cat deconstractor has been called" << std::endl;
	delete this->brain;
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
