#include <iostream>
using namespace std;

#include "UserTests.h"
#include "ScooterTests.h"

int main() {
  cout << "Hello World" << endl;
  userTestsStaticInstance();
  userTestsDynamicInstance();
  scooterTests();
};
