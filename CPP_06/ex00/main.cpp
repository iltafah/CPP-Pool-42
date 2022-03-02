/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:15:19 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/09 18:01:56 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

std::string toLower(const std::string &str)
{
	std::string lstr = str;
	int	len = str.length();

	for (int i = 0; i < len; i++)
		lstr[i] = tolower(str[i]);
	return (lstr);
}

bool	isDouble(Cast &data)
{
	size_t	endIndx;
	int		len = data.getArg().length();
	double	dNum;

	try
	{
		dNum = stod(data.getArg(), &endIndx);
	}
	catch(const std::exception& e)
	{
		return (false);
	}

	if (data.getArg() != "inf" && data.getArg() != "+inf" && data.getArg() != "-inf"
		&& data.getArg() != "nan")
		if (endIndx != len || data.getArg().find('.') == std::string::npos)
			return (false);
	data.castAll(dNum);
	return (true);
}

bool	isFloat(Cast &data)
{
	size_t		endIndx;
	int			len = data.getArg().length();
	float		fNum;

	try
	{
		fNum = stof(data.getArg(), &endIndx);
	}
	catch(const std::exception& e)
	{
		return (false);
	}

	if (data.getArg() != "inff" && data.getArg() != "+inff" && data.getArg() != "-inff"
		&& data.getArg() != "nanf")
	{
		if (endIndx != len - 1 || data.getArg().c_str()[endIndx] != 'f'
			|| data.getArg().find('.') == std::string::npos)
			return (false);
	}
	data.castAll(fNum);
	return (true);
}

bool	isInt(Cast &data)
{
	size_t	endIndx;
	int		len = data.getArg().length();
	int		iNum;

	try
	{
		iNum = stoi(data.getArg(), &endIndx);
	}
	catch(const std::exception& e)
	{
		data.print_iNum = false;
		return (false);
	}

	if (endIndx != len)
		return (false);
	data.castAll(iNum);
	return (true);
}

bool	isChar(Cast &data)
{
	std::string	arg = data.getArg();
	int		len = arg.length();

	if (len != 1)
		return (false);
	data.castAll(arg[0]);
	data.print_iNum = true;
	return (true);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		Cast data(toLower(argv[1]));

		if (isInt(data) || isChar(data) || isFloat(data) || isDouble(data))
		{
			data.printChar();
			data.printINum();
			data.printFNum();
			data.printDNum();
		}
		else
			std::cout << "Error in the given arg, Undefined Type" << std::endl;
	}
	return (0);
}
