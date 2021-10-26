/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:34:20 by iltafah           #+#    #+#             */
/*   Updated: 2021/10/26 22:04:28 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

void	addNewContactData(Contact &currContact)
{
	int						i = 0;
	std::string				data;
	const char				prompt[5][50] = {
		"⦿ Enter Contact First Name: ",
		"⦿ Enter Contact Last Name: ",
		"⦿ Enter Contact Nick Name: ",
		"⦿ Enter Contact Phone Number: ",
		"⦿ Enter Contact Darkest Secret: "
	};
	const Contact_members_ptr memberFunction[5] = {
		&Contact::setFirstName,
		&Contact::setLastName,
		&Contact::setNickName,
		&Contact::setPhoneNumber,
		&Contact::setDarkestSecret
	};

	std::cout << "Adding new contact data" << std::endl;
	while (i < 5)
	{
		std::cout << prompt[i];
		std::getline(std::cin, data);
		if (std::cin.eof())
			break ;
		CALL_MEMBER_FN(currContact, memberFunction[i++])(data);
	}
}

void	printDataCase(std::string given_data)
{
	int		index, width, len = 0;

	len = (int)given_data.length();
	width = len >= 10 ? 0 : 10 - len;
	// std::cout << std::endl << width << std::endl;
	std::cout << std::setw(width);
	while (index < len)
	{
		if (index == 9)
		{
			std::cout << '.';
			break ;
		}
		std::cout << given_data[index];
		index++;
	}
	// while (given_data[index] != '\0')
	// {
	// 	if (index == 9)
	// 	{
	// 		std::cout << '.';
	// 		break ;
	// 	}
	// 	std::cout << given_data[index];
	// 	index++;
	// }
}

void	searchForContact(Contact contacts[CONTACTS_SIZE], int filled_size)
{
	int			index = 0;
	std::string	data;

	while (index < filled_size)
	{
		std::cout << std::setw(10) << index;
		printDataCase(contacts[index].getFirstName());
		printDataCase(contacts[index].getLastName());
		printDataCase(contacts[index].getNickName());
		// std::cout << std::setw(10) << contacts[index].getFirstName();
		// std::cout << std::setw(10) << contacts[index].getLastName();
		// std::cout << std::setw(10) << contacts[index].getNickName();
		std::cout << std::endl;
		index++;
	}
	std::getline(std::cin, data);
	
}

void	PhoneBook::executeCommand(std::string command)
{
	if (command.compare("ADD") == 0)
	{
		addNewContactData(this->contacts[this->curr_contact_index]);
		this->curr_contact_index = (this->curr_contact_index + 1) % CONTACTS_SIZE;
		if (this->filled_size < CONTACTS_SIZE)
			this->filled_size++;
	}
	else if (command.compare("SEARCH") == 0)
	{
		std::cout << "it is searching time" << std::endl;
		searchForContact(this->contacts, this->filled_size);
	}
	else if (command.compare("EXIT") == 0)
	{
		std::cout << "it is exiting time" << std::endl;
	}
	else
		std::cout << "Command Not found" << std::endl;
	return ;
}

PhoneBook::PhoneBook(void)
{
	this->curr_contact_index = 0;
	this->filled_size = 0;
	return ;
}