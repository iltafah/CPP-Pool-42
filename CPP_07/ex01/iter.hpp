/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:35:42 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/11 00:01:11 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	myPrint(T &element)
{
	std::cout << element << std::endl;
}

template <typename T>
void	iter(T *arr, size_t len, void (*func)(T const &element))
{
	for (size_t index = 0; index < len; index++)
		func(arr[index]);
	return ;
}

#endif
