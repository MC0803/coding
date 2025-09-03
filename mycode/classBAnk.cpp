#include <iostream>
using namespace std;
class BankAccount
{
    int accountNumber;
    double balance;

public:
    BankAccount(int accNo = 0, double bal = 0.0)
    {
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Total =" << balance << endl;
        }
        else
        {
            cout << "Invalid amount" << endl;
        }
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Total balance = " << balance << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            cout << "Invalid amount" << endl;
        }
    }
    void getBalance()
    {
        cout << "Current balance = " << balance << endl;
    }
};

int main()
{
    BankAccount a;
    a.deposit(1000);
    a.withdraw(500);
    a.getBalance();
    return 0;
}