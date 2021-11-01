/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:44:47 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/01 14:22:47 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "unnamed";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	announce();
}

Zombie::~Zombie()
{
	std::cout << RED;
	std::cout << this->name << " zombie has been destroyed" << std::endl;
	std::cout << RESET;
}

void	Zombie::announce(void)
{
	std::cout << GREEN;
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
	std::cout << RESET;
	return ;
}
