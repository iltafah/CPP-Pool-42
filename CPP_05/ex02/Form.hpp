/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:09:19 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/01 18:49:04 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

# include "./Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		bool _isSigned;
		const int _signGrade;
		const int _execGrade;
		const std::string _name;

	public:
		Form();
		Form(std::string name, int signGrade, int execGrade);
		Form(const Form & obj);
		~Form();
	
	public:
		Form & operator = (const Form & obj);

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
		class FormIsNotSigned : public std::runtime_error
		{
			public:
				FormIsNotSigned() : runtime_error("Form is not signed") {}
		};

	public:
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		std::string getName() const;
		void beSigned(const Bureaucrat &obj);
		void execute(Bureaucrat const & executor) const;
		virtual void action() const = 0;
};

std::ostream & operator << (std::ostream &os, const Form &obj);

#endif
