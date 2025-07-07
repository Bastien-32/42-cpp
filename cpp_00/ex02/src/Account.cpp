/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 11:32:34 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/07 09:57:13 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Account.hpp"
#include "../include/colors.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) :
	_accountIndex(_nbAccounts++),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:"
				<< BLUE << _accountIndex << RESET
				<< ";amount:"
				<< BLUE << _amount << RESET
				<< ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:"
				<< BLUE << _accountIndex << RESET
				<< ";amount:"
				<< BLUE << _amount << RESET
				<< ";closed" << std::endl;
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

int	Account::checkAmount() const
{
	return (_amount);
}

void	Account::_displayTimestamp()
{
	time_t now = time(NULL);
	tm *ltm = gmtime(&now);

	std::cout << "[" << 1900 + ltm->tm_year
				<< std::setw(2) << std::setfill('0') << ltm->tm_mon + 1
				<< std::setw(2) << std::setfill('0') << ltm->tm_mday
				<< "_"
				<< std::setw(2) << std::setfill('0') << ltm->tm_hour
				<< std::setw(2) << std::setfill('0') << ltm->tm_min
				<< std::setw(2) << std::setfill('0') << ltm->tm_sec
				<< "] ";
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:"
				<< BLUE << _nbAccounts << RESET
				<< ";total:"
				<< BLUE << _totalAmount << RESET
				<< ";deposits:"
				<< BLUE << _totalNbDeposits << RESET
				<< ";withdrawals:"
				<< BLUE << _totalNbWithdrawals << RESET
				<< std::endl;
}

void	Account::displayStatus() const
{
	for(int i = 0; i < _nbAccounts; ++i) {
		_displayTimestamp();
		std::cout << "index:"
					<< BLUE << _accountIndex << RESET
					<< ";amount:"
					<< BLUE << _amount << RESET
					<< ";deposits:"
					<< BLUE << _nbDeposits << RESET
					<< ";withdrawals:"
					<< BLUE << _nbWithdrawals << RESET
					<< std::endl;
		break;
	}
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	int	p_amount(_amount);
	_amount += deposit;
	std::cout << "index:"
				<< BLUE << _accountIndex << RESET
				<< ";p_amount:"
				<< BLUE << p_amount << RESET
				<< ";deposit:"
				<< BLUE << deposit << RESET
				<< ";amount:"
				<< BLUE << _amount << RESET
				<< ";nb_deposits:"
				<< BLUE << ++_nbDeposits << RESET
				<< std::endl;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	int	p_amount(_amount);
	if(withdrawal > _amount) {
		std::cout << "index:"
					<< BLUE << _accountIndex << RESET
					<< ";p_amount:"
					<< BLUE << p_amount << RESET
					<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	std::cout << "index:"
				<< BLUE << _accountIndex << RESET
				<< ";p_amount:"
				<< BLUE << p_amount << RESET
				<< ";withdrawal:"
				<< BLUE << withdrawal << RESET
				<< ";amount:"
				<< BLUE << _amount << RESET
				<< ";nb_withdrawal:"
				<< BLUE << ++_nbWithdrawals << RESET
				<< std::endl;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}
