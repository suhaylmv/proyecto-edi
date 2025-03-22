#include "UserManager.h"

UserManager::UserManager(){
  cout << "INFO: UserManager: executing constructor (default)" << endl;
  usersList = new ListaDPI<User*>;
}

UserManager::UserManager(const UserManager &userManager){
  cout << "INFO: UserManager: executing constructor (copy)" << endl;
  usersList = new ListaDPI<User*>;
}

int UserManager::getNumUsers() const {
  int numUsers = 0;
  if (!usersList->estaVacia()){
    usersList->moverPrimero();
    while (!usersList->alFinal()){
      numUsers++;
      usersList->avanzar();
    }
  }
  return numUsers;
}

void UserManager::searchUser(string id) const {
  cout << "INFO: UserManager: searching user -> id = \"" << id << "\"" << endl;
  if (!usersList->estaVacia()){
    bool userFound = false;
    usersList->moverPrimero();
    while (!usersList->alFinal()){
      if (usersList->consultar()->getId() == id){
        userFound = true;
        cout << "--user found: " << usersList->consultar()->getFullName() << endl;
      }
      usersList->avanzar();
    }
    if (!userFound) {
      cout << "--user not found" << endl;}
  } else {
    cout << "--user list empty" << endl;
  }
}

void UserManager::createUser(string fullName, string phoneNumber, string email, int age, string id){
  cout << "INFO: UserManager: creating user: \"" << fullName << "\"" << endl;
  User *user = new User(fullName, phoneNumber, email, age, id);
  usersList->moverUltimo();
  usersList->avanzar();
  usersList->insertar(user);
}

void UserManager::print() const {
  cout << "PRINT: UserManager: user list:" << endl;
  if (!usersList->estaVacia()){
    usersList->moverPrimero();
    while (!usersList->alFinal()){
      usersList->consultar()->printName();
      usersList->avanzar();
    }
  } else {
    cout << "--is empty" << endl;
  }
}
