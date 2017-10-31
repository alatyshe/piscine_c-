#include "Account.class.hpp"
#include <iostream>
#include <ctime>

int							Account::_nbAccounts = 0;
int							Account::_totalAmount = 0;
int							Account::_totalNbDeposits = 0;
int							Account::_totalNbWithdrawals = 0;


//	CONSTRUCT
Account::Account( int initial_deposit ) :
	_accountIndex(Account::_nbAccounts++),
	_amount(initial_deposit),
	_nbWithdrawals(0),
	_nbDeposits(0)
{
	Account::_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << initial_deposit;
	std::cout << ";created" << std::endl;
	return ;
}


//	DENSTRUCT
Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	return ;
}


//	METHODS
void		Account::_displayTimestamp( void )
{
	int 		total_secs;

	time_t t = time(0);
	struct tm * now = localtime( & t );

	std::cout << '[';
	std::cout << (now->tm_year + 1900);
	std::cout << (now->tm_mon + 1);
	std::cout << now->tm_mday;
	std::cout << "_";
	std::cout << now->tm_hour;
	std::cout << now->tm_min;
	std::cout << now->tm_sec;
	std::cout << "]";
	return ;	
}


int							Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}
int							Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}
int							Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}
int							Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

bool						Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;

	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbDeposits;
	std::cout << std::endl;
	return true;
}

void						Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;

	this->_nbDeposits++;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;

	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
	return ;
}

void						Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

void						Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}
