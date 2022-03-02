/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:16:22 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/30 21:13:14 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "./Form.hpp"
# include "./ShrubberyCreationForm.hpp"
# include "./RobotomyRequestForm.hpp"
# include "./PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern & obj);
		~Intern();

	public:
		Intern & operator = (const Intern & obj);

	public:
		Form *makeForm(std::string formName, std::string target);
};

typedef Form * (*clonePtr) (std::string target);

#endif
