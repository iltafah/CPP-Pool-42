/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:09:01 by iltafah           #+#    #+#             */
/*   Updated: 2021/10/26 15:31:00 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

void	Contact::setFirstName(std::string first_name)
{
	this->first_name = first_name;
	return ;
}

void	Contact::setLastName(std::string last_name)
{
	this->last_name = last_name;
	return ;
}

void	Contact::setNickName(std::string nick_name)
{
	this->nick_name = nick_name;
	return ;
}

void	Contact::setPhoneNumber(std::string phone_number)
{
	this->phone_number = phone_number;
	return ;
}

void	Contact::setDarkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
	return ;
}

std::string	Contact::getFirstName(void) const
{
	return (this->first_name);
}

std::string	Contact::getLastName(void) const
{
	return (this->last_name);
}

std::string	Contact::getNickName(void) const
{
	return (this->nick_name);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->phone_number);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->darkest_secret);
}
