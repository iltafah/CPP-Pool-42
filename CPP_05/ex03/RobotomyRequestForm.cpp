/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:06:27 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/01 21:29:16 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45),
	_target("NONE")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45),
	_target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & obj)
{
	*this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm & obj)
{
	if (this != &obj)
	{
		this->_target = obj._target;
	}
	return (*this);
}

void	RobotomyRequestForm::action() const
{
	srand(time(NULL));
	std::cout << "ZZZZZCHHCZ~@#@ZZZZHSSHSIIIDSSHXHXZZZZZ" << std::endl;
	if (rand() % 2 != 0)
		std::cout << _target << " has been robotomized successfully 50\% of the time" << std::endl;
	else
		std::cout << "Unfortunately, it is a failure" << std::endl;
}
