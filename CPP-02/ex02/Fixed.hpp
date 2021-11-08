/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:33:41 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/08 18:06:41 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	rawBits;
		static const int fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int givenNum);
		Fixed(const float givenNum);
		Fixed(const Fixed& obj);
		bool operator > (const Fixed& obj) const;
		bool operator >= (const Fixed& obj) const;
		bool operator < (const Fixed& obj) const;
		bool operator <= (const Fixed& obj) const;
		bool operator == (const Fixed& obj) const;
		bool operator != (const Fixed& obj) const;
		void operator = (const Fixed& obj);
		Fixed operator + (const Fixed& obj);
		Fixed operator - (const Fixed& obj);
		Fixed operator * (const Fixed& obj);
		Fixed operator / (const Fixed& obj);
		Fixed& operator ++ (void);
		Fixed operator ++ (int);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed& max(Fixed& firstValue, Fixed& secondValue);
		const static Fixed& max(const Fixed& firstValue, const Fixed& secondValue);
		static Fixed& min(Fixed& firstValue, Fixed& secondValue);
		const static Fixed& min(const Fixed& firstValue, const Fixed& secondValue);
		~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
