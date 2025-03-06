#pragma once
#include <iostream>
#include "../BankAccount/BankAccount.h"
using namespace std;

class User {
  private:
    string fullName;
    string phoneNumber;
    int age;
    string id;
    BankAccount *bankAccount;
  public:
    // Constructors
    User();
    User(string fullName, string phoneNumber, int age, string id);
    User(const User &user);

    // Getters
    string getFullName() const;
    void getFullName2(string &fullName) const;
    string getPhoneNumber() const;
    int getAge() const;

    //
    // Setters
    //
    // fullName -> string that contains a name and at least a single surname, separated by a space
    void setFullName(string fullName);
    // phoneNumber ...
    void setPhoneNumber(string phoneNumber);
    // age -> integer
    void setAge(int age);

    string getId() const;

    // Other methods
    void consolePrint() const;
    string stringify() const;

    // Destructors
    ~User();
};
