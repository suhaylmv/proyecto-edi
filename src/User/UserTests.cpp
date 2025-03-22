#include "UserTests.h"
#include "User.h"

void userTestsStaticInstance(){
  cout << "*********************************************" << endl;
  cout << "TESTS: User (static instance)" << endl;

  User u1;
  u1.setFullName("Jorge Lopez");
  u1.setPhoneNumber("+34 333 333 333");
  u1.setEmail("jorgelopezz2006@gmail.com");
  u1.setId("Y1312234L");
  u1.setAge(18);
  u1.print();

  User u2("Perro Sanxe", "+34888999000", "perrosanxe33@gmail.com", 33, "Y1232442L");
  User u3 = u2;
  u3.print();

  cout << "*********************************************" << endl << endl << endl;
}

void userTestsDynamicInstance(){
  cout << "*********************************************" << endl;
  cout << "TESTS: User (dynamic instance)" << endl;

  User *u1 = new User();
  u1->setFullName("Jorge Lopez");
  u1->setPhoneNumber("+34 333 333 333");
  u1->setEmail("jorgelopezz2006@gmail.com");
  u1->setId("Y1312234L");
  u1->setAge(18);
  u1->print();


  User *u2 = new User("Perro Sanxe", "+34888999000", "perrosanxe33@gmail.com", 33, "Y1232442L");
  User *u3 = new User(*u2);

  u1->print();
  u3->print();

  delete u1;
  delete u2;
  delete u3;
  cout << "*********************************************" << endl << endl << endl;
}
