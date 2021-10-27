/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:07:50 by iltafah           #+#    #+#             */
/*   Updated: 2021/10/27 16:15:25 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string	phone_number;
		std::string	darkest_secret;

	public:
		// Contact();
		void setFirstName(std::string first_name);
		void setLastName(std::string last_name);
		void setNickName(std::string nick_name);
		void setPhoneNumber(std::string phone_number);
		void setDarkestSecret(std::string darkest_secret);
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getPhoneNumber(void) const;
		std::string getDarkestSecret(void) const;
		// ~Contact();
};

typedef void (Contact::*Contact_members_ptr)(std::string data);
# define CALL_MEMBER_FN(object,ptrToMember)  ((object).*(ptrToMember))

#endif
