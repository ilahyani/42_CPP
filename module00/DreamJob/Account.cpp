/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:08:29 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/12 16:51:37 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int idx = -1;
int Account::_nbAccounts = 8;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
    : _accountIndex(++idx), _amount(initial_deposit) ,_nbDeposits(0), _nbWithdrawals(0)
{
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout
        << "index:" << _accountIndex << ";amount:"
        << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout
        << "index:" << _accountIndex << ";amount:"
        << _amount << ";closed" << std::endl;
}

void    Account::_displayTimestamp(void)
{
    std::cout << "[1337_012342] ";
}

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}

void    Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout
        << "accounts:" << getNbAccounts() 
        << ";total:" << getTotalAmount() 
        << ";deposits:" << getNbDeposits()
        << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
    _displayTimestamp();
	std::cout
        << "index:" << _accountIndex 
        << ";p_amount:" << _amount 
        << ";deposit:" << deposit
        << ";amount:" << _amount + deposit
        << ";nb_deposits:" << ++_nbDeposits
        << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout
        << "index:" << _accountIndex 
        << ";p_amount:" << _amount 
        << ";withdrawal:";
    _amount -= withdrawal;
    if (checkAmount())
    {
        std::cout << withdrawal
            << ";amount:" << _amount
            << ";nb_withdrawals:" << ++_nbWithdrawals;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
    }
    else
    {
        std::cout << "refused";
        _amount += withdrawal;
    }
    std::cout << std::endl;
    return (0);
}

int		Account::checkAmount(void) const
{
	return (_amount >= 0 ? 1 : 0);
}

void	Account::displayStatus(void) const
{
    _displayTimestamp();
	std::cout
        << "index:" << _accountIndex 
        << ";amount:" << _amount
        << ";deposits:" << _nbDeposits
        << ";withdrawals:" << _nbWithdrawals
        << std::endl;
}
