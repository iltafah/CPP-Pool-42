/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:41:47 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/03 19:05:48 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./karen.hpp"

int		main()
{
	Karen karen;

	/******* DEBUG *******/
	karen.complain("DEBUG");
	std::cout << std::endl;

	/******* INFO *******/
	karen.complain("INFO");
	std::cout << std::endl;

	/******* WARNING *******/
	karen.complain("WARNING");
	std::cout << std::endl;

	/******* ERROR *******/
	karen.complain("ERROR");
	std::cout << std::endl;

	return (0);
}