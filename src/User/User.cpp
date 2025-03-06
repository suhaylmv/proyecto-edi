#include "User.h"

User::User(){
  cout << "INFO: executing constructor: User (default)" << endl;
  fullName = "";
  phoneNumber = "";
  email = "";
  age = 0;
  id = "";
  bankAccount = new BankAccount();
}

User::User(string fullName, string phoneNumber, string email, int age, string id, BankAccount *bankAccount){
  cout << "INFO: executing constructor: User (parameterized)" << endl;
  this->fullName = fullName;
  this->phoneNumber = phoneNumber;
  this->email = email;
  this->age = age;
  this->id = id;
  this->bankAccount = bankAccount;
}

User::User(const User &user){
  cout << "INFO: executing constructor: User (copy)" << endl;
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

void User::consolePrint() const {
  cout << "---------------------------------------------" << endl;
  cout << "PRINT: User: " << fullName << endl;
  cout << "Phone number: " << phoneNumber << endl;
  cout << "Email : " << email << endl;
  cout << "Age: " << age << endl;
  cout << "ID: " << id << endl;

  bankAccount->consolePrint();
  cout << "---------------------------------------------" << endl;
}

string User::stringify() const {
  string str;
  str = fullName + "" + phoneNumber + "" + email + "" + std::to_string(age) + "" + id;
  return str;
}

User::~User(){
  cout << "INFO: executing destructor: User -> " << fullName << endl;
  delete bankAccount;
}
