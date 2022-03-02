/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:40:58 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/01 21:19:30 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"

int		main()
{
	try
	{
		Bureaucrat pro(1, "pro");
		Bureaucrat noob(150, "noob");

		std::cout << pro << std::endl;
		std::cout << noob << std::endl;
		std::cout << std::endl;

		Form *Forms[3] = {
			new ShrubberyCreationForm("Home"),
			new RobotomyRequestForm("Home"),
			new PresidentialPardonForm("Home")
			};

		pro.signForm(*Forms[0]);
		pro.signForm(*Forms[1]);
		pro.signForm(*Forms[2]);
		std::cout << std::endl;

		pro.executeForm(*Forms[0]);
		std::cout << std::endl;
		pro.executeForm(*Forms[1]);
		std::cout << std::endl;
		pro.executeForm(*Forms[2]);
		std::cout << std::endl;
	}

	catch (const std::exception& e)
	{
		std::cout << RED;
		std::cout << e.what() << std::endl;
		std::cout << RESET;
	}
	
	std::cout << "The End" << std::endl;
	
	return (0);
}
