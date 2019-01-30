/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:24:10 by ytran             #+#    #+#             */
/*   Updated: 2018/10/02 18:24:11 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>
#include "Account.class.hpp"

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    this->_nbAccounts += 1;
    this->_totalAmount = this->_totalAmount + initial_deposit;
    this->_accountIndex = this->_nbAccounts;
    this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex - 1
			<< ";amount:" << _amount
			<< ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << (this->_accountIndex - 1) <<
		";amount:" << this->_amount << ";closed" << std::endl;
}

void     Account::_displayTimestamp(void)
{
    time_t rawtime;
    struct tm *timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    std::cout << "["
			<< timeinfo->tm_year + 1900
			<< std::setw(2) << std::setfill('0') << timeinfo->tm_mon
			<< std::setw(2) << std::setfill('0') << timeinfo->tm_mday
			<< '_'
			<< std::setw(2) << std::setfill('0') << timeinfo->tm_hour
			<< std::setw(2) << std::setfill('0') << timeinfo->tm_min
			<< std::setw(2) << std::setfill('0') << timeinfo->tm_sec
			<< "] ";
}

void     Account::makeDeposit(int deposit)
{
    this->_amount = this->_amount + deposit;
	this->_nbDeposits = this->_nbDeposits + 1;
	this->_totalAmount = this->_totalAmount + deposit;
	this->_totalNbDeposits = this->_totalNbDeposits + 1;

	_displayTimestamp();
	std::cout << "index:" << (this->_accountIndex - 1) << ";p_amount:" << (this->_amount - deposit) << 
		";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << (this->_accountIndex - 1) << 
			";p_amount:" << this->_amount <<  ";withdrawal:" << "refused" << std::endl;
		return (false);
	}
	else
	{
		this->_totalAmount = this->_totalAmount - withdrawal;
		this->_totalNbWithdrawals = this->_totalNbWithdrawals + 1;
		this->_amount = this->_amount - withdrawal;
		this->_nbWithdrawals = this->_nbWithdrawals + 1;
		_displayTimestamp();
		std::cout << "index:" << (this->_accountIndex - 1) << 
			";p_amount:" << (this->_amount + withdrawal) <<  ";withdrawal:" <<
			withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

void    Account::displayAccountsInfos(void)
{
    _displayTimestamp();
	std::cout << "accounts:" << _nbAccounts <<
		";total:" << _totalAmount <<
		";deposits:" << _totalNbDeposits <<
		";withdrawals:" << _totalNbWithdrawals <<
		std::endl;
}

void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << (this->_accountIndex - 1) <<
		";amount:" << this->_amount << ";deposits:" << this->_nbDeposits <<
		";withdrawals:" << this->_nbWithdrawals << std::endl;
}