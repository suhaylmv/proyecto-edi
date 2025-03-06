#include "Scooter.h"

// Constructors
Scooter::Scooter(){
  cout << "INFO: executing constructor: User (default)" << endl;
  id = "";
  currentUser = nullptr;
}

Scooter::Scooter(string id, string brand, string model, bool broken, bool available, User *currentUser){
  cout << "INFO: executing constructor: User (parameterized)" << endl;
  this->id = id;
  this->brand = brand;
  this->model = model;
  this->broken = broken;
  this->available = available;
  currentUser = new User();
}

Scooter::Scooter(const Scooter &scooter){
  cout << "INFO: executing constructor: User (copy)" << endl;
  id = scooter.id;
  brand = scooter.brand;
  model = scooter.model;
  broken = scooter.broken;
  available = scooter.available;
  currentUser = scooter.currentUser;
}

// GETTERS
string Scooter::getId() const { return id; }
string Scooter::getBrand() const { return brand; }
string Scooter::getModel() const { return model; }
bool Scooter::getBroken() const { return broken;}
bool Scooter::getAvailable() const { return available; }
string Scooter::getUserId() const { return currentUser->getId(); }

// SETTERS
void Scooter::setId(string id) { this->id = id; }
void Scooter::setBrand(string brand) { this->brand = brand; }
void Scooter::setModel(string model) { this->model = model; }
void Scooter::setBroken(bool broken) { this->broken = broken; }
void Scooter::setAvailable(bool available) { this->available = available; }
void Scooter::setUser(User *user){ currentUser = user; }

// OTHER METHODS
bool Scooter::operator == (const Scooter &scooter){
  return (this->id == scooter.id);
}

// DESTRUCTOR
Scooter::~Scooter(){
  delete currentUser;
}
