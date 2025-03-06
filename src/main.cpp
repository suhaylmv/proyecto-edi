#include <iostream>
#include "User/UserTests.h"
#include "Scooter/ScooterTests.h"
using namespace std;

int main() {
  cout << "Hello World" << endl;
  userTestsStaticInstance();
  userTestsDynamicInstance();
  scooterTests();
};
