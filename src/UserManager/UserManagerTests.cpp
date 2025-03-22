#include "UserManagerTests.h"
void userManagerTests(){
  UserManager *userManager1 = new UserManager();
  userManager1->createUser("Antonio Silva", "+34489225924", "asilva@unex.es", 52, "Y2359242");
  userManager1->createUser("Pedro Luis Aguilar", "+3409125824", "paguilar@unex.es", 54, "Y0612351");
  userManager1->print();
  cout << "PRINT: UserManager: number of users: " << userManager1->getNumUsers() << endl;
  userManager1->searchUser("artstasra");
  userManager1->searchUser("Y2359242");
  userManager1->searchUser("Y0612351");
}
