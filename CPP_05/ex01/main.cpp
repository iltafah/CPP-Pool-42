/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:40:58 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/01 21:12:41 by iltafah          ###   ########.fr       */
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
		std::cout << std::endl;

		Form holyForm("Holy Form", 10, 10);

		std::cout << holyForm << std::endl;

		pro.signForm(holyForm);
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
