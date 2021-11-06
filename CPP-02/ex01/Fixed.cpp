/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:33:47 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/06 18:52:56 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

Fixed::Fixed() : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int givenNum)
{
	std::cout << "Int constructor called" << std::endl;
	this->rawBits = givenNum << 8;
}

Fixed::Fixed(const float givenNum)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf(givenNum * (1 << 8));
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl; 
	*this = obj;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::operator=(const Fixed& obj)
{
	std::cout << "Assignation operator called" << std::endl;
	this->rawBits = obj.getRawBits();
}

std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os << (float)obj.toFloat();
	return (os);
}

int		Fixed::getRawBits(void) const
{
	return (this->rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

int		Fixed::toInt(void) const
{
	return (this->rawBits >> 8);
}

float	Fixed::toFloat(void) const
{
	return (roundf(this->rawBits) / (1 << 8));
}
