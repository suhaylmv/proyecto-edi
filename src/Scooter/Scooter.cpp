#include "Scooter.h"

// Constructors
Scooter::Scooter(){
  cout << "INFO: Scooter: executing constructor (default)" << endl;
  id = "";
  currentUser = nullptr;
}

Scooter::Scooter(string id, string brand, string model, bool isBroken, bool available, User *currentUser){
  cout << "INFO: Scooter: executing constructor (parameterized)" << endl;
  this->id = id;
  this->brand = brand;
  this->model = model;
  this->isBroken = isBroken;
  this->available = available;
  currentUser = new User();
}

Scooter::Scooter(const Scooter &scooter){
  cout << "INFO: Scooter: executing constructor (copy)" << endl;
  id = scooter.id;
  brand = scooter.brand;
  model = scooter.model;
  isBroken = scooter.isBroken;
  available = scooter.available;
  currentUser = scooter.currentUser;
}

// GETTERS
string Scooter::getId() const {
  string returnId = id;
  if (id == "") returnId = "<null id>";
  return returnId;
}
string Scooter::getBrand() const { return brand; }
string Scooter::getModel() const { return model; }
bool Scooter::getBroken() const { return isBroken;}
bool Scooter::getAvailable() const { return available; }
string Scooter::getUserId() const { return currentUser->getId(); }

// SETTERS
void Scooter::setId(string id) { this->id = id; }
void Scooter::setBrand(string brand) { this->brand = brand; }
void Scooter::setModel(string model) { this->model = model; }
void Scooter::setBroken(bool isBroken) { this->isBroken = isBroken; }
void Scooter::setAvailable(bool available) { this->available = available; }
void Scooter::setUser(User *user){ currentUser = user; }

// OTHER METHODS
void Scooter::print(){cout << "PRINT: Scooter id: " << id << endl;}
void Scooter::printId(){
  if (id != ""){
    cout << "--Scooter id: \"" << id << "\"" << endl;}
  else {
    cout << "--Scooter id: \"<null id>\"" << endl;
  }
}

// OVERLOADED OPERATORS
bool Scooter::operator == (const Scooter &scooter){
  return (this->id == scooter.id);
}

// DESTRUCTOR
Scooter::~Scooter(){
  delete currentUser;
}
