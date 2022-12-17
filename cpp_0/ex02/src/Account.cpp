/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:48:47 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/15 16:48:53 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <ostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account (int initial_deposit) {
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbWithdrawals = 0;
    _nbDeposits = 0;
    _totalAmount += initial_deposit;
    _nbAccounts++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
        << "amount:" << _amount << ";"
        << "created" << std::endl;
}

Account::~Account ( void ) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
        << "amount:" << _amount << ";"
        << "closed" << std::endl;
}

int	Account::getNbAccounts( void ) {return (_nbAccounts);}

int	Account::getTotalAmount( void ) {return (_totalAmount);}

int	Account::getNbDeposits( void ) {return (_totalNbDeposits);}

int	Account::getNbWithdrawals( void ) {return (_totalNbWithdrawals);}

void	Account::makeDeposit( int deposit ) {
    int p_amount = _amount;

    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
        << "p_amount:" << p_amount << ";"
        << "deposit:" << deposit << ";"
        << "amount:" << _amount << ";"
        << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    int p_amount = _amount;
    _displayTimestamp();
    if (withdrawal > _amount) {
        std::cout << "index:" << _accountIndex << ";"
            << "p_amount:" << p_amount << ";"
            << "withdrawal:refused" << std::endl;
        return (0);
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << "index:" << _accountIndex << ";"
        << "p_amount:" << p_amount << ";"
        << "withdrawal:" << withdrawal << ";"
        << "amount:" << _amount << ";"
        << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (1);
}

int		Account::checkAmount( void ) const {
    return (1);
}

//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
        << "amount:" << _amount << ";"
        << "deposits:" << _nbDeposits << ";"
        << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";"
        << "total:" << _totalAmount << ";"
        << "deposits:" << _totalNbDeposits << ";"
        << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void ) {
    time_t  now = time(0);
    tm      *tml = localtime(&now);
    std::cout << "["
        << tml->tm_year + 1900
        << tml->tm_mon + 1
        << tml->tm_mday
        << "_"
        << tml->tm_hour
        << tml->tm_min
        << tml->tm_sec
        << "] ";
}
