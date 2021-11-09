/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:13:46 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/09 08:42:39 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

int		main()
{
	ClapTrap	playerOne("Elias");

	playerOne.attack("Corrector");
	playerOne.takeDamage(15);
	playerOne.beRepaired(20);

	return (0);
}
