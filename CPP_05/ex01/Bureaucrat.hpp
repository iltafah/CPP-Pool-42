/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:39:43 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/29 17:40:30 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# include "./Form.hpp"

# define RED "\e[1;31m"
# define YEL "\e[1;93m"
# define RESET "\e[0m"

# define LOWEST_GRADE 150
# define HIGHEST_GRADE 1

class Form;

class Bureaucrat
{
	private:
		int	_grade;
		const std::string _name;

	public:
		Bureaucrat();
		Bureaucrat(int grade, std::string name);
		Bureaucrat(const Bureaucrat &obj);
		~Bureaucrat();

	public:
		const Bureaucrat & operator = (const Bureaucrat & obj);

	public:
		class GradeTooHighException : public std::runtime_error
		{
			public:
				GradeTooHighException() : runtime_error("Grade is Too High") {}
		};
		class GradeTooLowException : public std::runtime_error
		{
			public:
				GradeTooLowException() : runtime_error("Grade is Too Low") {}
		};

	public:
		const std::string & getName() const;
		const int & getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(Form &obj);
};

std::ostream & operator << (std::ostream &os, const Bureaucrat & obj);

#endif
