/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:55:04 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/24 19:21:10 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	Account::_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;	
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts()
{
	return Account::_nbAccounts;
}
int	Account::getTotalAmount()
{
	return Account::_totalAmount;
}
int	Account::getNbDeposits()
{
	return Account::_totalNbDeposits;	
}

int	Account::getNbWithdrawals()
{
	return Account::_totalNbWithdrawals;	
}

int	Account::checkAmount() const
{
	return Account::_amount;
}

void	Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount - deposit << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
  std::cout << "index:" << _accountIndex << ";";
  std::cout << "p_amount:" << _amount<< ";";
  if (_amount < withdrawal)
	{
    std::cout << "withdrawal:refused" << std::endl;
    return false;
  }
  std::cout << "withdrawal:" << withdrawal << ";";
  _amount -= withdrawal;
  std::cout << "amount:" << _amount<< ";";
  _nbWithdrawals++;
  std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
  _totalAmount -= withdrawal;
  _totalNbWithdrawals++;
  return true;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount<< ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
  std::cout << "total:" << _totalAmount<< ";";
  std::cout << "deposits:" << _totalNbDeposits << ";";
  std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp()
{
	time_t currentTime;
  time(&currentTime);
  //Convert the current time to a tm structure
  struct tm* timeInfo = localtime(&currentTime);
  char timestamp[20];  // Assuming the timestamp won't exceed 20 characters
  //Format the timestamp
  strftime(timestamp, 20, "[%Y%m%d_%H%M%S] ", timeInfo);
  //Print the timestamp
  std::cout << timestamp;
}
