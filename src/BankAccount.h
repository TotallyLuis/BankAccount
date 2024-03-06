#ifndef BANKACCOUNT_H
#define BACKACCOUNT_H
#include <array>


class BankAccount
{
    public:
    BankAccount();//default
    BankAccount(std::string accountNumber, std::string ownerName);
    BankAcoount(std::string accountNumber, std::string ownerName, double balance, double interestRate);




    //getters
    std::string getAccountNumber();
    std::string getOwnerName();
    double getBalance();
    double getInterestRAte();



    //setters
    void getAccountNumber(std::string accountNumber);



    




    //other funcions


    private:
    //initializations
    std::string accountNumber = "";
    std::string ownerName = "";
    double balance = 0.0;
    double interestRate = 0.0;



};



#endif