/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:16:27 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/08 18:42:17 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
# define CAST_HPP

#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>

class Cast
{
	private:
		Cast();

	private:
		std::string _arg;
		double	_dNum;
		float	_fNum;
		int		_iNum;
		char	_character;

	public:
		bool	print_iNum;

	public:
		Cast(std::string num);
		Cast(const Cast & obj);
		~Cast();

	public:
		Cast & operator = (const Cast & obj);

	public:
		const std::string & getArg() const;
		void printDNum() const;
		void printFNum() const;
		void printINum() const;
		void printChar() const;

		void castAll(double arg);
		void castAll(float arg);
		void castAll(int arg);
		void castAll(char arg);
};

#endif
