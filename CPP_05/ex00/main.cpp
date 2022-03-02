/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:40:58 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/01 20:32:19 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

int		main()
{
	try
	{
		Bureaucrat pro(1, "pro");
		Bureaucrat noob(150, "noob");

		std::cout << pro << std::endl;
		std::cout << noob << std::endl;

		pro.incrementGrade();
		noob.decrementGrade();

		std::cout << pro << std::endl;
		std::cout << noob << std::endl;
	}

	catch (const std::exception& e)
	{
		std::cout << RED;
		std::cout << e.what() << std::endl;
		std::cout << RESET;
	}

	return (0);
}
