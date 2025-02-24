#include "Scooter.h"

Scooter::Scooter(){
  id = "";
  currentUser = nullptr;
}

string Scooter::getUserId() const {
  return currentUser->getId();
}

void Scooter::setUser(User *user){
  currentUser = user;
}

bool Scooter::operator == (const Scooter &scooter){
  return (this->id == scooter.id);
}

Scooter::~Scooter(){
  delete currentUser;
}
