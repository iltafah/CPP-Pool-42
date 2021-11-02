/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:30:50 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/02 08:43:08 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main()
{
	std::string	message("HI THIS IS BRAIN");

	//Declare string PTR && REF
	std::string	*stringPTR = &message;
	std::string	&stringREF = message;

	//Display addresses
	std::cout << (void*)&message << std::endl;
	std::cout << (void*)&stringPTR << std::endl;
	std::cout << (void*)&stringREF << std::endl;

	//Display strings
	std::cout << message << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}