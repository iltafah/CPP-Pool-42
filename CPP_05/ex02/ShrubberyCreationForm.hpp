/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:05:31 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/30 12:42:03 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>

# include "./Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm & obj);
		~ShrubberyCreationForm();

	public:
		ShrubberyCreationForm & operator = (const ShrubberyCreationForm & obj);
	
	public:
		void action() const;
};


#endif
