/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:03:57 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/02 18:55:58 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./replace.hpp"

int		printError(std::string errorMsg)
{
	std::cout << errorMsg << std::endl;
	return (ERROR);
}

int		checkErrors(int argsCount, char **args)
{
	if (argsCount != 3)
		return (printError("Error: Wrong number of arguments"));
	if (args[0][0] == '\0' || args[1][0] == '\0' || args[2][0] == '\0')
		return (printError("Error: An empty string within arguments"));
	return (SUCCESS);
}

int		main(int argc, char **argv)
{
	if (checkErrors(argc - 1, argv + 1) == SUCCESS)
	{
		std::ifstream inputFile;
		
		inputFile.open(argv[1]);
		
	}
	return (0);
}
