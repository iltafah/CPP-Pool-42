/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:17:12 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/09 18:48:21 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string givenName) : FragTrap(givenName + "_clap_name") , ScavTrap(givenName + "_clap_name")
{
	this->name = givenName;
}

DiamondTrap::~DiamondTrap()
{
}
