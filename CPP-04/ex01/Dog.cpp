/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:26:39 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/13 17:17:12 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default Constractor has been called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& giveObj)
{
	std::cout << "Dog Copy Constractor has been called" << std::endl;
	this->type = giveObj.type;
}

Dog::~Dog()
{
	std::cout << "Dog deconstractor has been called" << std::endl;
	delete this->brain;
}

void	Dog::operator=(const Dog& giveObj)
{
	std::cout << "Dog Copy assignment operator has been called" << std::endl;
	this->type = giveObj.type;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark Bark!" << std::endl;
}
