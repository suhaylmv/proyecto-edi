#include "../User/User.h"
#pragma once

class Scooter {
  private:
    string id;
    string brand;
    string model;
    bool isBroken;
    bool available;
    User *currentUser;
  public:
    Scooter();
    Scooter(string id, string brand, string model, bool isBroken, bool available, User *currentUser);
    Scooter(const Scooter &scooter);

    string getId() const;
    string getBrand() const;
    string getModel() const;
    bool getBroken() const;
    bool getAvailable() const;
    string getUserId() const;

    void setId(string id);
    void setBrand(string brand);
    void setModel(string model);
    void setBroken(bool isBroken);
    void setAvailable(bool available);
    void setUser(User *user);

    void print();
    void printId();

    bool operator == (const Scooter &scooter);

    ~Scooter();
};
