#include <iostream>
using namespace std;

class BankAccount {
  private:
    string accountNumber;
    int balance;
  public:
    BankAccount();
    BankAccount(string accountNumber, int balance);
    BankAccount(const BankAccount &bankAccount);

    string getAccountNumber() const;
    int getBalance() const;

    void setAccountNumber(string accountNumber);
    void deposit(int amount);
    void withdraw(int amount);

    void consolePrint();

    ~BankAccount();
};
