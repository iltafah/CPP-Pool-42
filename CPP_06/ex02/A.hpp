/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 22:06:23 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/08 22:21:56 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "./Base.hpp"

class A : public Base
{
	public:
		~A() {std::cout << "A destructor has been called" << std::endl;};
};

#endif
