/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 22:07:40 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/08 22:08:15 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "./Base.hpp"

class C : public Base
{
	public:
		~C() {std::cout << "C destructor has been called" << std::endl;};
};

#endif
