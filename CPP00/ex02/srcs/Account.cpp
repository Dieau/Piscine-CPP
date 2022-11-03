/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:08:40 by alakhdar          #+#    #+#             */
/*   Updated: 2022/07/27 13:44:27 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Account.hpp"
#include <iostream>
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	
}

Account::Account(int initial_deposit)
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return(_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return(_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount + deposit << ";";
	std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool    Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (_amount - withdrawal > 0)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount - withdrawal << ";";
		std::cout << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;
		_amount -= withdrawal; _totalAmount -= withdrawal;
		_totalNbWithdrawals++; return (true);
	}
	else
	{
		std::cout << "withdrawal:" << "refused" << std::endl;
		return (false);
	}
}

int	Account::checkAmount(void) const
{
	return(_amount);
}

void    Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp( void )
{
	time_t time_now = time(NULL);
	struct tm *pLocal = localtime(&time_now);
	std::cout << '[' << pLocal->tm_year + 1900 << pLocal->tm_mon << pLocal-> tm_mday
		<< "" << pLocal->tm_hour << pLocal->tm_min << pLocal->tm_sec << "] ";
}
