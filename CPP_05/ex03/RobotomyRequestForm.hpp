/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:06:40 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/30 12:41:11 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "./Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & obj);
		~RobotomyRequestForm();

	public:
		RobotomyRequestForm & operator = (const RobotomyRequestForm & obj);
		
	public:
		void action() const;
};



#endif
