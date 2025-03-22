#include <iostream>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount(){
  cout << "INFO: BankAccount: executing constructor (default)" << endl;
  accountNumber = "0000-0000-0000-0000";
  balance = 0;
}

BankAccount::BankAccount(string accountNumber, int balance){
  cout << "INFO: BankAccount: executing constructor (parameterized)" << endl;
  this->accountNumber = accountNumber;
  this->balance = balance;
}

BankAccount::BankAccount(const BankAccount &bankAccount) {
  cout << "INFO: BankAccount: executing constructor (copy)" << endl;
  accountNumber = bankAccount.accountNumber;
  balance = bankAccount.balance;
}

string BankAccount::getAccountNumber() const {
  return accountNumber;
}

int BankAccount::getBalance() const {
  return balance;
}

void BankAccount::setAccountNumber(string accountNumber) {
  this->accountNumber = accountNumber;
}

void BankAccount::deposit(int amount) {
  balance += amount;
}

void BankAccount::withdraw(int amount) {
  balance -= amount;
}

void BankAccount::consolePrint() {
  cout << "Balance is: " << balance << endl;
  cout << "Account number is: " << accountNumber << endl;
}

BankAccount::~BankAccount() {}
