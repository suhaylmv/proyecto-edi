#include "User.h"

User::User(){
  cout << "Executing default constructor for User" << endl;
  fullName = "";
  phoneNumber = "";
  age = 0;
  id = "";

  bankAccount = new BankAccount();
}

User::User(string fullName, string phoneNumber, int age, string id){
  cout << "Executing parametrized constructor for User" << endl;
  this->fullName = fullName;
  this->phoneNumber = phoneNumber;
  this->age = age;
  this->id = id;

  bankAccount = new BankAccount();
}

User::User(const User &user){
  fullName = user.fullName;
  phoneNumber = user.phoneNumber;
  age = user.age;
  id = user.id;

  bankAccount = new BankAccount(user.bankAccount->getAccountNumber(), user.bankAccount->getBalance());
}

// Getters

string User::getFullName() const {
  return fullName;
}
void User::getFullName2(string &fullName) const {
  fullName = this->fullName;
}
string User::getPhoneNumber() const {
  return phoneNumber;
}
int User::getAge() const {
  return age;
}

// Setters

void User::setFullName(string fullName){
  this->fullName = fullName;
}

void User::setPhoneNumber(string phoneNumber){
  this->phoneNumber = phoneNumber;
}

void User::setAge(int age){
  this->age = age;
}

string User::getId() const {
  return this->id;
}

void User::consolePrint() const {
  cout << "Full name: " << fullName << endl;
  cout << "Phone number: " << phoneNumber << endl;
  cout << "Age: " << age << endl;

  bankAccount->consolePrint();
}

string User::stringify() const {
  string str;
  str = fullName + "" + phoneNumber + "" + std::to_string(age);
  return str;
}

User::~User(){
  cout << "Executing destructor for user" << endl;
  delete bankAccount;
}
