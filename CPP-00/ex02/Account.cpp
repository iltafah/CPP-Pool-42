/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:13:40 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/12 11:32:12 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/*
** ************************************************************************** **
									Getters								
** ************************************************************************** **
*/

int		Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

/*
** ************************************************************************** **
							DisplayTimestamp()							
** ************************************************************************** **
*/

void	Account::_displayTimestamp(void)
{
	std::time_t currTime;
	std::tm		*timeInf;
	char		formatedTime[100];

	std::time(&currTime);
	timeInf = std::localtime(&currTime);
	std::strftime(formatedTime, sizeof(formatedTime), "[%Y%m%d_%H%M%S] ", timeInf);
	std::cout << formatedTime;
	return ;
}

/*
** ************************************************************************** **
							DisplayAccountsInfos()							
** ************************************************************************** **
*/

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
	return ;
}

/*
** ************************************************************************** **
							DisplayStatus()							
** ************************************************************************** **
*/

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

/*
** ************************************************************************** **
							MakeDeposit()							
** ************************************************************************** **
*/

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "nb_deposits:" << ++this->_nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	return ;
}

/*
** ************************************************************************** **
							MakeWithdrawal()							
** ************************************************************************** **
*/

bool	Account::makeWithdrawal(int withdrawl)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	if (withdrawl <= checkAmount())
	{
		this->_amount -= withdrawl;
		Account::_totalNbWithdrawals += 1;
		Account::_totalAmount -= withdrawl;
		std::cout << "withdrawal:" << withdrawl << ";";
		std::cout << "amount:" << checkAmount() << ";";
		std::cout << "nb_withdrawals:" << ++this->_nbWithdrawals;
		std::cout << std::endl;
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	return true;
}

/*
** ************************************************************************** **
						Account::Account(int) constructor							
** ************************************************************************** **
*/

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts += 1;
	Account::_totalAmount += checkAmount();
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";created";
	std::cout << std::endl;
}

/*
** ************************************************************************** **
								Destructor							
** ************************************************************************** **
*/

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";closed";
	std::cout << std::endl;
}