/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:33:41 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/04 12:28:34 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int	rawBits;
		static const int fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed& obj);
		void operator = (const Fixed& obj);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};


#endif
