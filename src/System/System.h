#include "../UserManager/UserManager.h"

class System {
  private:
    string name;
    UserManager *userManager;

    void loadUsers();

  public:
    System();
    System(string name);
    System(const System &system);

    void printUsers();
    void searchUser();

    ~System();
}
