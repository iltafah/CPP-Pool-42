/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:44:50 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/01 15:09:46 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main()
{
	int		i;
	Zombie*	zombies;

	i = 0;
	zombies = zombieHorde(5, "ilias");
	std::cout << std::endl;
	while (i < 5)
	{
		zombies[i].announce();
		i++;
	}
	i = 0;
	while (i < 5)
	{
		zombies[i].~Zombie();
		i++;
	}
	delete &zombies[0];
	return (0);
}