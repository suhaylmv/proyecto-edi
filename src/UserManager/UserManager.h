#include "../DataStructures/ListaDPI.h"
#include "../User/User.h"

class UserManager {
  private:
    ListaDPI <User*> *usersList;

  public:
    // CONSTRUCTORS
    UserManager();
    UserManager(const UserManager &userManager);

    // GETTERS
    void searchUser(string id) const;
    int getNumUsers() const;

    // SETTERS
    void createUser(string fullName, string phoneNumber, string email, int age, string id);

    // PRINTERS
    void print() const;

    // DESTRUCTOR
    ~UserManager();
};
