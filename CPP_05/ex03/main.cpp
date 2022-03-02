/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:40:58 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/30 17:47:42 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./Intern.hpp"

int		main()
{
	try
	{
		Intern  someRandomIntern;
		Bureaucrat pro(1, "pro");
		Bureaucrat noob(150, "noob");

		std::cout << pro << std::endl;
		std::cout << noob << std::endl;
		std::cout << std::endl;

		Form *Forms[3] = {
			someRandomIntern.makeForm("shrubbery creation", "Home"),
			someRandomIntern.makeForm("presidential pardon", "Bender"),
			someRandomIntern.makeForm("robotomy request", "me")
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
