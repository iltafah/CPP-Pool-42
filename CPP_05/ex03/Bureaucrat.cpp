/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:40:30 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/30 18:04:21 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _grade(LOWEST_GRADE), _name("NoName")
{
}

Bureaucrat::Bureaucrat(int grade, std::string name) : _grade(grade), _name(name)
{
	try
	{
		if (_grade < HIGHEST_GRADE)
			throw (Bureaucrat::GradeTooHighException());
		else if (_grade > LOWEST_GRADE)
			throw(Bureaucrat::GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cout << YEL;
		std::cout << "Error in Bureaucrat parameterized constructor : ";
		std::cout << RESET;
		throw ;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	*this = obj;
}

Bureaucrat::~Bureaucrat()
{
}

const Bureaucrat & Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
		new (this) Bureaucrat(obj._grade, obj._name);
	return (*this);
}

const std::string & Bureaucrat::getName() const
{
	return (_name);
}

const int & Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	try
	{
		if (_grade <= HIGHEST_GRADE)
			throw (Bureaucrat::GradeTooHighException());
	}
	catch(const std::exception& e)
	{
		std::cout << YEL;
		std::cout << "Error while incrementing " << _name << " grade : ";
		std::cout << RESET;
		throw ;
	}
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	try
	{
		if (_grade >= LOWEST_GRADE)
			throw(Bureaucrat::GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cout << YEL;
		std::cout << "Error while decrementing " << _name << " grade : ";
		std::cout << RESET;
		throw ;
	}
	_grade++;
}

void	Bureaucrat::signForm(Form &obj)
{
	try
	{
		obj.beSigned(*this);
		std::cout << this->_name <<  " signs " <<  obj.getName() << " form" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << YEL;
		std::cout << this->_name << " cannot sign " << obj.getName() << " form because: ";
		std::cout << RESET;
		throw;
	}
}

std::ostream & operator << (std::ostream &os, const Bureaucrat & obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (os);
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << YEL;
		std::cout << "Error when trying to execute " << form.getName() << ": ";
		std::cout << RESET;
		throw ;
	}
}
