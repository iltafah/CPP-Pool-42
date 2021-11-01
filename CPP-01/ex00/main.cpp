/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:38:29 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/01 11:41:23 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int		main()
{
	Zombie*	mainZombie;

	mainZombie = newZombie("Main");
	randomChump("Random");
	randomChump("Another Random");
	delete mainZombie;
	return (0);
}
