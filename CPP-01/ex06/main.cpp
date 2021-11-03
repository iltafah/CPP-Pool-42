/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:41:47 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/03 19:48:46 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./karen.hpp"

int	getEnumIndx(std::string givenLevel)
{
	int	i = 0;
	const std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	while (i < 4)
	{
		if (givenLevel == levels[i])
			return (i);
		i++;
	}
	return (-1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		Karen karen;
		int		index = getEnumIndx(argv[1]);

		switch (index)
		{
			case DEBUG:
				std::cout << "[ DEBUG ]" << std::endl;
				karen.complain("DEBUG");
				std::cout << std::endl;
				
			case INFO:
				std::cout << "[ INFO ]" << std::endl;
				karen.complain("INFO");
				std::cout << std::endl;

			case WARNING:
				std::cout << "[ WARNING ]" << std::endl;
				karen.complain("WARNING");
				std::cout << std::endl;
				
			case ERROR:
				std::cout << "[ ERROR ]" << std::endl;
				karen.complain("ERROR");
				std::cout << std::endl;
				break;

			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
		}
		// /******* DEBUG *******/
		// karen.complain("DEBUG");
		// std::cout << std::endl;
	
		// /******* INFO *******/
		// karen.complain("INFO");
		// std::cout << std::endl;
	
		// /******* WARNING *******/
		// karen.complain("WARNING");
		// std::cout << std::endl;
	
		// /******* ERROR *******/
		// karen.complain("ERROR");
		// std::cout << std::endl;
	}
	return (0);
}