/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:44:42 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/01 15:20:10 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int		i;
	Zombie*	zombies;

	i = 0;
	zombies = (Zombie*) ::operator new (sizeof(Zombie) * N);
	while (i < N)
	{
		// zombies[i] = *(new (zombies) Zombie(name));
		new (&zombies[i]) Zombie(name);
		i++;
	}
	return (zombies);
}
