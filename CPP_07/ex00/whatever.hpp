/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:01:36 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/11 00:12:58 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T keep = a;
	a = b;
	b = keep;
	return ;
}

template <typename T>
T & min(T &a, T &b)
{
	return (a >= b ? b : a);
}

template <typename T>
T & max(T &a, T &b)
{
	return (a > b ? a : b);
}

#endif
