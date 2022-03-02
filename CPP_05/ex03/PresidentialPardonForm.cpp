/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:07:39 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/30 10:50:57 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5),
	_target("NONE")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & obj)
{
	*this = obj;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm & obj)
{
	if (this != &obj)
	{
		this->_target = obj._target;
	}
	return (*this);
}

void	PresidentialPardonForm::action() const
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
