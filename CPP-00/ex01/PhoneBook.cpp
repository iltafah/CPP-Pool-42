/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:34:20 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/12 10:07:18 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

/*
** ************************************************************************** **
								addNewContactData()									
** ************************************************************************** **
*/

void	addNewContactData(Contact &currContact)
{
	int						i = 0;
	std::string				data;
	std::string				prompt[5] = {
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

	while (i < 5)
	{
		std::cout << prompt[i];
		std::getline(std::cin, data);
		if (std::cin.eof())
			break ;
		CALL_MEMBER_FN(currContact, memberFunction[i++])(data);
		currContact.setMaxStringLength(data.length());
	}
}

/*
** ************************************************************************** **
							displayContactsTable()										
** ************************************************************************** **
*/

std::string	truncateData(std::string data)
{
	if (data.length() > 10)
		return (data.substr(0, 9).append("."));
	return (data);
}

void	printHeaderRect(std::string firstCase, std::string secondCase, std::string thirdCase,
							std::string forthCase)
{
	std::cout << std::string((4 * 10) + 5, '-') << std::endl;
	std::cout << '|' << std::setw(10) << firstCase;
	std::cout << '|' << std::setw(10) << secondCase;
	std::cout << '|' << std::setw(10) << thirdCase;
	std::cout << '|' << std::setw(10) << forthCase;
	std::cout << '|' << std::endl;
	std::cout << std::string((4 * 10) + 5, '-') << std::endl;
	return ;
}

void	printDataRect(int index, std::string firstName, std::string lastName, std::string nickName)
{
	std::cout << '|' << std::setw(10) << index;
	std::cout << '|' << std::setw(10) << truncateData(firstName);
	std::cout << '|' << std::setw(10) << truncateData(lastName);
	std::cout << '|' << std::setw(10) << truncateData(nickName);
	std::cout << '|' << std::endl;
	std::cout << std::string((4 * 10) + 5, '-') << std::endl;
	return ;
}

void	displayContactsTable(Contact contacts[CONTACTS_SIZE], int filled_size)
{
	std::string	data;
	int			index = 0;

	printHeaderRect("Index", "First name", "Last name", "Nick name");
	while (index < filled_size)
	{
		printDataRect(index + 1, contacts[index].getFirstName(),
			contacts[index].getLastName(), contacts[index].getNickName());
		index++;
	}
	std::cout << std::endl;
	return ;
}

/*
** ************************************************************************** **
								searchForContact()																		
** ************************************************************************** **
*/

void	printFullContactData(Contact givenContact)
{
	int	totalLen;
	int	maxDataLen;
	int	toBePrintedLen;
	int	maxIndicLen;
	int	spacesNum;
	std::string	indicators[5] = {
		". First Name: ",
		". Last Name: ",
		". Nick Name: ",
		". Phone Number: ",
		". Darkest Secret: "
	};
	std::string contactData[5] = {
		givenContact.getFirstName(),
		givenContact.getLastName(),
		givenContact.getNickName(),
		givenContact.getPhoneNumber(),
		givenContact.getDarkestSecret()
	};

	maxIndicLen = indicators[4].length();
	maxDataLen = givenContact.getMaxStringLength();
	totalLen = maxDataLen + maxIndicLen;
	std::cout << std::string(maxDataLen + maxIndicLen, '.') << std::endl;
	for (int i = 0; i < 5; i++)
	{
		toBePrintedLen = contactData[i].length() + indicators[i].length();
		spacesNum = totalLen - toBePrintedLen;
		std::cout << indicators[i] << contactData[i] << std::setw(spacesNum) << '.' << std::endl;
	}
	std::cout << std::string(maxDataLen + maxIndicLen, '.') << std::endl;
}

void	searchForContact(Contact contacts[CONTACTS_SIZE], int filled_size)
{
	std::string	data;
	int			contactIndex;

	if (filled_size > 0)
	{
		std::cout << "Which contact would you display its data?" << std::endl;
		std::cout << "Enter it's index : [   ]\b\b\b";
		std::getline(std::cin, data);
		contactIndex = atoi(data.c_str()) - 1;
		if (data.size() == 1 && contactIndex >= 0 && contactIndex < filled_size)
			printFullContactData(contacts[contactIndex]);
		else
			std::cout << "Wrong index, please enter index from [1 - " << filled_size << "]\n";
	}
	else if (filled_size == 0)
		std::cout << "PhoneBook is empty, please add a new contact" << std::endl;
	return ;
}

/*
** ************************************************************************** **
							PhoneBook::executeCommand()																		
** ************************************************************************** **
*/

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
		displayContactsTable(this->contacts, this->filled_size);
		searchForContact(this->contacts, this->filled_size);
	}
	else if (command.compare("EXIT") == 0)
	{
		std::cout << "📖 git commit" << std::endl;
		std::cout << "⤒ git push" << std::endl;
		std::cout << "🚪 leave program" << std::endl;
		exit(0);
	}
	else
		std::cout << "Command Not found" << std::endl;
	std::cout << std::endl;
	return ;
}

/*
** ************************************************************************** **
							PhoneBook::PhoneBook()																		
** ************************************************************************** **
*/

PhoneBook::PhoneBook(void) : curr_contact_index(0) , filled_size(0) {}
