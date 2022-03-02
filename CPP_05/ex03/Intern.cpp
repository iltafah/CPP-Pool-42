/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:17:22 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/30 21:12:38 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern & obj)
{
	*this = obj;
}

Intern::~Intern()
{
}

Intern & Intern::operator=(const Intern &obj)
{
	return (*this);
}

Form *cloneShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *cloneRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *clonePresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	const std::string	availableForms[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	clonePtr ptrToFunc[3] = {
		&cloneShrubbery,
		&cloneRobotomy,
		&clonePresidential
	};

	for (int i = 0; i < 3; i++)
	{
		if (formName == availableForms[i])
			return (ptrToFunc[i](target));
	}
	return (NULL);
}
