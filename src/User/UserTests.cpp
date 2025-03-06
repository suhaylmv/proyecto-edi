#include "UserTests.h"

void userTestsStaticInstance(){
  // User u1;
  // u1.consolePrint();
  // u1.setFullName("Jorge Lopez");
  // u1.setPhoneNumber("+34 333 333 333");
  // u1.setAge(18);
  // u1.consolePrint();

  // User u2("Perro Sanxe", "+34888999000", 48, "");
  // User u3 = u2;
  // u3.consolePrint();
}

void userTestsDynamicInstance(){
  User *u1 = new User();
  // User *u2 = new User("Isabel Ayuso", "+34888999000", 40, "");
  // User *u3 = new User(*u2);

  u1->consolePrint();
  // u2->consolePrint();
  // u3->consolePrint();

  delete u1;
  // delete u2;
  // delete u3;
}
