/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:09:00 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/29 18:39:56 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

Form::Form() :
	_name("NoName"), _signGrade(1), _execGrade(1), _isSigned(false)
{
}

Form::Form(std::string name, int signGrade, int execGrade) :
	_name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
	try
	{
		if (_signGrade < HIGHEST_GRADE || _execGrade < HIGHEST_GRADE)
			throw (Bureaucrat::GradeTooHighException());
		else if (_signGrade > LOWEST_GRADE || _execGrade > LOWEST_GRADE)
			throw(Bureaucrat::GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cout << YEL;
		std::cout << "Error in Form parameterized constructor : ";
		std::cout << RESET;
		throw ;
	}
}

Form::Form(const Form &obj) : 
	_name(obj._name), _signGrade(obj._signGrade),
	_execGrade(obj._execGrade), _isSigned(obj._isSigned)
{
}

Form::~Form()
{
}

const Form & Form::operator = (const Form &obj)
{
	if (this != &obj)
		new (this) Form(obj.getName(), obj.getSignGrade(), obj.getExecGrade());
	return (*this);
}

std::ostream & operator << (std::ostream &os, const Form &obj)
{
	os << obj.getName() << " form is " << (obj.getIsSigned() == true ? "signed" : "not signed");
	os << std::endl;
	os << "The required grade to sign this, is [" << obj.getSignGrade() << "]";
	os << std::endl;
	os << "The required grade to execute this, is [" << obj.getExecGrade() << "]";
	os << std::endl;
	return (os);
}

bool	Form::getIsSigned() const
{
	return (_isSigned);
}

int		Form::getExecGrade() const
{
	return (_execGrade);
}

int		Form::getSignGrade() const
{
	return (_signGrade);
}

std::string	Form::getName() const
{
	return (_name);
}

void	Form::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() > this->_signGrade)
		throw(Form::GradeTooLowException());
	_isSigned = true;
}
