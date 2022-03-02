/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 22:06:59 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/08 22:07:31 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "./Base.hpp"

class B : public Base
{
	public:
		~B() {std::cout << "B destructor has been called" << std::endl;};
};

#endif
