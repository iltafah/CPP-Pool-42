/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:39:14 by iltafah           #+#    #+#             */
/*   Updated: 2021/10/26 16:24:31 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

int	main()
{
	std::string	command;
	PhoneBook	phoneBook;

	while (true)
	{
		std::cout << "📞 ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			break ;
		phoneBook.executeCommand(command);
	}
	return (0);
}
