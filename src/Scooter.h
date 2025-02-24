#include "User.h"

class Scooter {
  private:
    string id;
    User *currentUser;
  public:
    Scooter();
    // Scooter(string id, User *currentUser);

    string getUserId() const;

    void setUser(User *user);

    bool operator == (const Scooter &scooter);

    ~Scooter();
};
