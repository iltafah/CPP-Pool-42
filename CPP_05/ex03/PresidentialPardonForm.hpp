/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:08:01 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/30 12:41:16 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "./Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm & obj);
		~PresidentialPardonForm();

	public:
		PresidentialPardonForm & operator = (const PresidentialPardonForm & obj);

	public:
		void action() const;
};



#endif
