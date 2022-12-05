#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) :_accountIndex(_nbAccounts),  _amount(initial_deposit)
{
	_nbAccounts++;
	_totalAmount+= initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_nbDeposits++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount <<";deposit:" << deposit
	<< ";amount:" << deposit + _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (withdrawal > _amount)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount <<";withdrawal:refused" << std::endl;
		return (0);
	}
	else
	{
		_nbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount <<";withdrawal:" << withdrawal
		<< ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return (1);
	}
}

int		Account::checkAmount( void ) const
{
	return (1);
}

void	Account::displayStatus( void ) const
{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";amount:" << _amount <<";deposits:"
		<< _nbDeposits << ";withdrawals:" << _nbWithdrawals<< std::endl;
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

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:"
	 << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl; 
}

 void	Account::_displayTimestamp( void )
{
	time_t now; 
	now = time(0);
	struct tm * timeinfo;
	timeinfo = std::localtime(&now);
	std::cout << "[" << 1900 + timeinfo->tm_year << std::setfill('0') << std::setw(2) <<  timeinfo->tm_mon << std::setfill('0') << std::setw(2) << timeinfo->tm_mday << "_"
	 << timeinfo->tm_hour << timeinfo->tm_min << timeinfo->tm_sec << "] ";
}
