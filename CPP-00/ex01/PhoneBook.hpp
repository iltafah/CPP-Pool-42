/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:34:53 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/12 10:19:51 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "./Contact.hpp"

# define CONTACTS_SIZE 8

class PhoneBook
{
	private:
		Contact	contacts[CONTACTS_SIZE];
		int		curr_contact_index;
		int		filled_size;

	public:
		PhoneBook();
		void	executeCommand(std::string command);
};

#endif
