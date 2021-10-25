/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:36:24 by iltafah           #+#    #+#             */
/*   Updated: 2021/10/25 13:07:13 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_string_uppercased(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
		std::cout << (char)toupper(string[i++]);
	return ;
}

void	print_given_args_uppercased(char **args, int size)
{
	int	i;

	i = 0;
	while (i < size)
		print_string_uppercased(args[i++]);
	std::cout << "\n";
	return ;	
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		print_given_args_uppercased(argv + 1, argc - 1);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}
