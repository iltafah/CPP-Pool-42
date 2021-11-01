/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:44:50 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/01 18:10:10 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	callZombiesDestructors(Zombie* zombies)
{
	int		i;
	
	i = 0;
	while (i < 5)
		zombies[i++].~Zombie();
	return ;
}

int		main()
{
	Zombie*	zombies;

	zombies = zombieHorde(5, "Holy Semicolon");
	callZombiesDestructors(zombies);
	::operator delete (zombies);
	return (0);
}
