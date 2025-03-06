#include "ScooterTests.h"

void scooterTests(){
  // Case 1: default constructor
  Scooter scooter1;
  Scooter scooter2;

  if (scooter1 == scooter2){
    cout << "Scooters are equal" << endl;
  } else {
    cout << "Scooters are different" << endl;
  }

  // Case 2: parametrized constructor
  // Scooter scooter2 = new Scooter("1923nhe-123eihrst", );

}
