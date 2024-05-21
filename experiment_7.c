/*Design a constructor for bank account class.*/

#include <iostream>
#include <string>

using namespace std;

class BankAccount 
{
private:
    string depositorName;
    long accountNumber;
    string accountType;
    double balance;

public:
    BankAccount(const string& name, long accNumber, const string& accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    void display() 
	{
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: ₹" << balance << endl;
    }
};

int main() 
{
    BankAccount account("Sherlock", 221309865, "Savings", 60000.0);

    account.display();

    return 0;
}//Aditya Tiwari
