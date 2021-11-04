/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:41:58 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/04 09:51:42 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./karen.hpp"

void	Karen::debug(void)
{
	std::cout << "I love to get ";
	std::cout << "extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << std::endl;
	std::cout << "I just love it!";
	std::cout << std::endl;
	return ;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough!";
	std::cout << std::endl;
	std::cout << "If you did I would not have to ask for it!";
	std::cout << std::endl;
	return ;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month.";
	std::cout << std::endl;
	return ;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
	return ;
}

int		hashString(std::string str)
{
	int	i = -1;
	int	index = 0;
	int	firstPrime = 13;
	int	secondPrime = 37;
	int	strLen = str.length();

	while (++i < strLen)
		index += (str[i] * firstPrime * secondPrime) + i;	
	return (index % 4);
}

void	Karen::complain(std::string level)
{
	int index = hashString(level);
	const KarenMemberPtr memberPtr[4] = {
		&Karen::error,
		&Karen::debug,
		&Karen::info,
		&Karen::warning
	};

	CALL_MEMBER_FN(*this, memberPtr[index])();
	return ;
}
