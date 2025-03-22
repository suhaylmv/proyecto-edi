#include <iostream>
#include "Station.h"
using namespace std;

// SETTERS
Station::Station(){
  cout << "INFO: Station: executing constructor (default)" << endl;
  id = "";
  address = "";
  numAvailable = 0;
  availableQueue = new Cola<Scooter*>;
  brokenQueue = new Cola<Scooter*>;
}

Station::Station(string id, string address){
  cout << "INFO: Station: executing constructor (parameterized)" << endl;
  this->id = id;
  this->address = address;
  numAvailable = 0;
  availableQueue = new Cola<Scooter*>;
  brokenQueue = new Cola<Scooter*>;
}

Station::Station(const Station &station){
  cout << "INFO: Station: executing constructor (copy)" << endl;
  id = station.id;
  address = station.address;
  numAvailable = station.numAvailable;

  cout << "INFO: Station: copying queue" << endl;

  availableQueue = new Cola<Scooter*>;
  copyQueue(availableQueue, station.availableQueue);
  brokenQueue = new Cola<Scooter*>;
  copyQueue(brokenQueue, station.brokenQueue);

  print();
  station.print();
}

// DUDA: sería correcto implementarlo como una función que recibe una cola y retorna una cola nueva con los items copiados?
void Station::copyQueue(Cola<Scooter*> *newQueue, Cola<Scooter*> *copyQueue){
  Cola<Scooter*> *tempQueue = new Cola<Scooter*>;
  while (!copyQueue->estaVacia()){
    Scooter *currentItem = copyQueue->getPrimero();
    newQueue->encolar(currentItem);
    tempQueue->encolar(currentItem);
    copyQueue->desencolar();
  };
  while (!tempQueue->estaVacia()){
    copyQueue->encolar(tempQueue->getPrimero());
    tempQueue->desencolar();
  }
  delete tempQueue;
}

// GETTERS
string Station::getId() const {
  string returnId = id;
  if (returnId == ""){
    returnId = "<null id>";}
  return returnId;
}

string Station::getAddress() const {
  string returnAddress = address;
  if (returnAddress == ""){
    returnAddress = "<null address>";}
  return returnAddress;
}

int Station::getNumAvailable() const { return numAvailable; }

// SETTERS
void Station::addScooter(Scooter *scooter){
  cout << "INFO: Station (from \"" << address << "\"): adding scooter with id: \"" << scooter->getId() << "\"" << endl;
  if (!scooter->getBroken()){
    availableQueue->encolar(scooter);
  } else {
    brokenQueue->encolar(scooter);
  }
}

void Station::fixScooter(){
  Scooter *scooter = brokenQueue->getPrimero();
  availableQueue->encolar(scooter);
}

// PRINT
void Station::print() const {
  cout << "PRINT: Station:" << endl;
  cout << "--id: \"" << id << "\"" << endl;
  cout << "--address: \"" << address << "\"" << endl;
  cout << "--numAvailable: " << numAvailable << endl;
  printAvailableScooters(false);
  printBrokenScooters(false);
}

void Station::printAvailableScooters(bool printTitle) const {
  printScootersList(availableQueue, false, printTitle);
}

void Station::printBrokenScooters(bool printTitle) const {
  printScootersList(brokenQueue, true, printTitle);
}

void Station::printScootersList(Cola<Scooter*> *queue, bool isBrokenQueue, bool printTitle ) const {
  if (printTitle){
    if (!isBrokenQueue){
      cout << "PRINT: Station (from \"" << address << "\"): available queue:" << endl;}
    else {
      cout << "PRINT: Station (from \"" << address << "\"): broken queue:" << endl;}
  } else {
    if (!isBrokenQueue){
      cout << "--available queue:" << endl;}
    else {
      cout << "--broken queue:" << endl;}
  }

  if(!queue->estaVacia()){
    Cola<Scooter*> *tempQueue = new Cola<Scooter*>;
    // Dequeue each scooter into a temp queue, print its details, and then enqueue it back into the original queue
    while (!queue->estaVacia()) {
      Scooter *currentScooter = queue->getPrimero();
      if (!printTitle) cout << "--";
      currentScooter->printId();
      tempQueue->encolar(currentScooter);
      queue->desencolar();
    }
    while(!tempQueue->estaVacia()){
      Scooter *currentScooter = tempQueue->getPrimero();
      queue->encolar(currentScooter);
      tempQueue->desencolar();
    }
    delete tempQueue;
  } else {
    if (!printTitle) cout << "--";
    if (!isBrokenQueue){
      cout << "--is empty" << endl; }
    else {
      cout << "--is empty" << endl; }
  }
}

// DESTRUCTOR
Station::~Station(){
  delete availableQueue;
  delete brokenQueue;
}
