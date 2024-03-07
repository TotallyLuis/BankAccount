#include <iostream>
#include <string>
#include <cmath>
#include <array>
#include <random>
#include <cstddef>
#include <ctime>
#include <iomanip>
#include "BankAccount.h"



//constructors
BankAccount::BankAccount()
{
    accountNumber = "";
    ownerName = "";
    balance = 0.0;
    interestRate = 0.01;
}

BankAccount::BankAccount(std::string accountnumber, std::string ownerName)
{
    setBalance(balance);
    setInterestRate(interestRate);
}
BankAccount::BankAccount(std::accountNumber, std::string ownerName, double balance, double interestRate)
{
    setAccountNumber(accountNumber);
    setOwnerName(ownerName);   
    setBalance(balance);
    setInterestRate(interestRate);
}



//getters
getAccountNumber()
{
    return accountNumber;
}


getOwnerName()
{
    return ownerName;
}

getBalance()
{
    return balance;
}

getInterestRate()
{
    return interestRate;
}







//setters

setAccountNumber(std::string accountNumber)
{
    this->accountNumber = accountNumber;
}

setOwnerName(std::string ownerName)
{
    this->ownerName = ownerName;
}
setBalance(double balance)
{
    this->balance = balance;
}
setInterestRate(double interestRate)
{
    this->interestRate = interestRate;
}



//functions























