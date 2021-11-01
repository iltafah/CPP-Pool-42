/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:44:42 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/01 18:01:30 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int		i;
	Zombie*	zombies;

	i = 0;
	zombies = (Zombie*) operator new (sizeof(Zombie) * N);
	while (i < N)
		new (&zombies[i++]) Zombie(name);
	return (zombies);
}
