/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:33:47 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/0this->fractionalBits 17:46:04 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

Fixed::Fixed() : rawBits(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int givenNum)
{
	// std::cout << "Int constructor called" << std::endl;
	this->rawBits = givenNum << this->fractionalBits;
}

Fixed::Fixed(const float givenNum)
{
	// std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf(givenNum * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed& obj)
{
	// std::cout << "Copy constructor called" << std::endl; 
	*this = obj;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

void	Fixed::operator=(const Fixed& obj)
{
	// std::cout << "Assignation operator called" << std::endl;
	this->rawBits = obj.getRawBits();
}


bool	Fixed::operator>(const Fixed& obj) const
{
	if (this->rawBits > obj.rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& obj) const
{
	if (this->rawBits >= obj.rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& obj) const
{
	if (this->rawBits < obj.rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& obj) const
{
	if (this->rawBits <= obj.rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed& obj) const
{
	if (this->rawBits == obj.rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& obj) const
{
	if (this->rawBits != obj.rawBits)
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &obj)
{
	Fixed	newObj;
	
	newObj.rawBits = this->rawBits + obj.getRawBits();
	return (newObj);
}

Fixed	Fixed::operator-(const Fixed &obj)
{
	Fixed	newObj;
	
	newObj.rawBits = this->rawBits - obj.getRawBits();
	return (newObj);
}

Fixed	Fixed::operator*(const Fixed &obj)
{
	return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &obj)
{
	return (Fixed(this->toFloat() / obj.toFloat()));
}

std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

Fixed&	Fixed::operator++()
{
	this->rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	newObj = *this;

	++*this;
	return (newObj);
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
	return (this->rawBits >> this->fractionalBits);
}

float	Fixed::toFloat(void) const
{
	float	floatRawBits = roundf(this->rawBits);

	return (floatRawBits / (1 << this->fractionalBits));
}

Fixed&	Fixed::max(Fixed& firstValue, Fixed& secondValue)
{
	if (firstValue > secondValue)
		return (firstValue);
	return (secondValue);
}

const Fixed&	Fixed::max(const Fixed& firstValue, const Fixed& secondValue)
{
	if (firstValue > secondValue)
		return (firstValue);
	return (secondValue);
}

Fixed&	Fixed::min(Fixed& firstValue, Fixed& secondValue)
{
	if (firstValue < secondValue)
		return (firstValue);
	return (secondValue);
}

const Fixed&	Fixed::min(const Fixed& firstValue, const Fixed& secondValue)
{
	if (firstValue < secondValue)
		return (firstValue);
	return (secondValue);
}
