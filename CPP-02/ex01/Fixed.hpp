/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:33:41 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/06 18:27:31 by iltafah          ###   ########.fr       */
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
		void operator = (const Fixed& obj);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;
		~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
