#include "Scooter.h"

// Constructors
Scooter::Scooter(){
  id = "";
  currentUser = nullptr;
}
Scooter::Scooter(string id, string brand, string model, bool broken, bool available, User *currentUser){
  this->id = id;
  this->brand = brand;
  this->model = model;
  this->broken = broken;
  this->available = available;
  currentUser = new User();
}

// Getters
string Scooter::getId() const { return id; }
string Scooter::getBrand() const { return brand; }
string Scooter::getModel() const { return model; }
bool Scooter::getBroken() const { return broken;}
bool Scooter::getAvailable() const { return available; }
string Scooter::getUserId() const { return currentUser->getId(); }

// Setters
void Scooter::setId(string id) { this->id = id; }
void Scooter::setBrand(string brand) { this->brand = brand; }
void Scooter::setModel(string model) { this->model = model; }
void Scooter::setBroken(bool broken) { this->broken = broken; }
void Scooter::setAvailable(bool available) { this->available = available; }
void Scooter::setUser(User *user){ currentUser = user; }

// Other methods
bool Scooter::operator == (const Scooter &scooter){
  return (this->id == scooter.id);
}

// Destructor
Scooter::~Scooter(){
  delete currentUser;
}
