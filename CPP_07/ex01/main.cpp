/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:36:08 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/11 00:01:23 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./iter.hpp"

int main()
{
	int	arrOfInt[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	std::cout << "iterate and print content of arrOfInt :" << std::endl;
	iter(arrOfInt, 10, myPrint);

	std::cout << std::endl;

	std::string arrOfStr[4] = {"Holy Semicolon", "Iltafah", "Elias", "Run Out Of Names"};
	
	std::cout << "iterate and print content of arrOfStr :" << std::endl;
	iter(arrOfStr, 4, myPrint);


	return (0);
}
