#include "User.h"

User::User(){
  cout << "INFO: User: executing constructor (default)" << endl;
  fullName = "";
  phoneNumber = "";
  email = "";
  age = 0;
  id = "";
  bankAccount = new BankAccount();
}

User::User(string fullName, string phoneNumber, string email, int age, string id){
  cout << "INFO: User: executing constructor (parameterized)" << endl;
  this->fullName = fullName;
  this->phoneNumber = phoneNumber;
  this->email = email;
  this->age = age;
  this->id = id;
  bankAccount = new BankAccount();
}

User::User(const User &user){
  cout << "INFO: User: executing constructor (copy)" << endl;
  fullName = user.fullName;
  phoneNumber = user.phoneNumber;
  email = user.email;
  age = user.age;
  id = user.id;
  bankAccount = new BankAccount(user.bankAccount->getAccountNumber(), user.bankAccount->getBalance());
}

// Getters

string User::getFullName() const { return fullName; }
void User::getFullName2(string &fullName) const { fullName = this->fullName; }
string User::getPhoneNumber() const { return phoneNumber; }
string User::getEmail() const { return email; }
int User::getAge() const { return age; }
string User::getId() const { return this->id; }

// Setters

void User::setFullName(string fullName){ this->fullName = fullName; }
void User::setPhoneNumber(string phoneNumber){ this->phoneNumber = phoneNumber; }
void User::setEmail(string email){ this->email = email;}
void User::setAge(int age){ this->age = age; }
void User::setId(string id){ this->id = id; }

void User::print() const {
  cout << "PRINT: User: " << fullName << endl;
  cout << "--phone number: \"" << phoneNumber << "\""  << endl;
  cout << "--email: \"" << email << "\"" << endl;
  cout << "--age: " << age << endl;
  cout << "--id: \"" << id << "\"" << endl;

  bankAccount->consolePrint();
}

void User::printName() const {
  cout << "--\"" << fullName << "\"" << endl;
}

string User::stringify() const {
  string str;
  str = fullName + "" + phoneNumber + "" + email + "" + std::to_string(age) + "" + id;
  return str;
}

User::~User(){
  cout << "INFO: User: executing destructor for \"" << fullName << "\"" << endl;
  delete bankAccount;
}
