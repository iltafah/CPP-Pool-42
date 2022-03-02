/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:16:11 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/09 18:09:37 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cast.hpp"

Cast::Cast()
{
}

Cast::Cast(std::string arg) : 
	_arg(arg), _dNum(0), _fNum(0), _iNum(0), _character(0), print_iNum(true)
{
	
}

Cast::Cast(const Cast & obj)
{
	*this = obj;
}

Cast::~Cast()
{
}

Cast & Cast::operator = (const Cast & obj)
{
	if (this != &obj)
	{
		this->_arg = obj._arg;
		this->_dNum = obj._dNum;
		this->_fNum = obj._fNum;
		this->_iNum = obj._iNum;
		this->_character = obj._character;
	}
	return (*this);
}

void Cast::printDNum() const {
	std::cout << "double: " << _dNum << std::endl;
}

void Cast::printFNum() const {
	std::cout << "float: ";
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	std::cout << _fNum << "f";
	std::cout << std::endl;
}

void Cast::printINum() const {
	std::cout << "int: ";
	if (print_iNum)
		std::cout << _iNum;
	else
		std::cout << "impossible";
	std::cout << std::endl;
}

static bool is_char(int c)
{
	return (c >= -128 && c <= 127);
}

static bool is_printable(int c)
{
	return (c >= 32 && c <= 126);
}

void Cast::printChar() const {
	std::cout << "char: ";
	if (is_char(_iNum) && is_printable(_character))
		std::cout << "'" << _character << "'";
	else if(is_char(_iNum))
		std::cout << "Non displayable";
	else
		std::cout << "impossible";
	std::cout << std::endl;
}

const std::string &Cast::getArg() const
{
	return (this->_arg);
}

void	Cast::castAll(double arg) {
	_character = static_cast<char>(arg);
	_iNum = static_cast<int>(arg);
	_fNum = static_cast<float>(arg);
	_dNum = static_cast<double>(arg);
}

void	Cast::castAll(float arg) {
	_character = static_cast<char>(arg);
	_iNum = static_cast<int>(arg);
	_fNum = static_cast<float>(arg);
	_dNum = static_cast<double>(arg);
}

void	Cast::castAll(int arg) {
	_character = static_cast<char>(arg);
	_iNum = static_cast<int>(arg);
	_fNum = static_cast<float>(arg);
	_dNum = static_cast<double>(arg);
}

void	Cast::castAll(char arg) {
	_character = static_cast<char>(arg);
	_iNum = static_cast<int>(arg);
	_fNum = static_cast<float>(arg);
	_dNum = static_cast<double>(arg);
}
