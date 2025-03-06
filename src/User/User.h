#pragma once
#include <iostream>
#include "../BankAccount/BankAccount.h"
using namespace std;

class User {
  private:
    string fullName;
    string phoneNumber;
    string email;
    int age;
    string id;
    BankAccount *bankAccount;
  public:
    // CONSTRUCTORS
    User();
    User(string fullName, string phoneNumber, string email, int age, string id, BankAccount *bankAccount);
    User(const User &user);

    // GETTERS
    string getFullName() const;
    void getFullName2(string &fullName) const;
    string getPhoneNumber() const;
    string getEmail() const;
    int getAge() const;
    string getId() const;

    // SETTERS
    // fullName -> string that contains a name and at least a single surname, separated by a space
    void setFullName(string fullName);
    // phoneNumber ...
    void setPhoneNumber(string phoneNumber);

    void setEmail(string email);
    // age -> integer
    void setAge(int age);

    void setId(string id);


    // OTHER METHODS
    void consolePrint() const;
    string stringify() const;

    // DESTRUCTORS
    ~User();
};
