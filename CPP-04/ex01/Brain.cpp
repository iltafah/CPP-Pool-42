/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:36:22 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/14 10:24:47 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain Default Constractor has been called" << std::endl;
}

Brain::Brain(const Brain& givenObj)
{
	//////
}

Brain::~Brain()
{
	std::cout << "Brain Deconstractor has been called" << std::endl;
}

void	Brain::operator=(const Brain& givenObj)
{
	//////
}