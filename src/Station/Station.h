#include <iostream>
#include "../DataStructures/Cola.h"
#include "../Scooter/Scooter.h"
using namespace std;

// Tamaño del problema: se considera como tamaño del problema n, la longitud de la cola más larga entre cDisponibles y cAveriados

class Station {
  private:
    string id;
    string address;
    int numAvailable;
    Cola<Scooter*> *brokenQueue;
    Cola<Scooter*> *availableQueue;
  public:
    // CONSTRUCTORS

    // PRE: ---
    // COM: O(1)
    Station();
    // PRE: ---
    // COM: O(1)
    Station(string id, string address);
    // PRE: Puntero a estación
    // COM: O(n)
    Station(const Station &station);

    // PRE: Puntero a patinete existente
    // DES: Añade el patinete a una de las colas, dependiendo de si está rota
    // COM: O(n)
    void copyQueue(Cola<Scooter*> *newQueue, Cola<Scooter*> *copyQueue);

    // GETTERS
    string getId() const;
    string getAddress() const;
    int getNumAvailable() const;

    // SETTERS

    // PRE: Puntero a patinete existente
    // DES: Añade el patinete a una de las colas, dependiendo de si está rota
    // COM: O(n)
    void addScooter(Scooter *scooter);
    void fixScooter();

    // PRINT

    // PRE: ---
    // DES: Imprime en la consola todos los datos de la Estación
    // COM: O(n)
    void print() const;

    // PRE: ---
    // DES: Imprime en la consola la lista de patinetes disponibles
    // COM: O(n)
    void printAvailableScooters(bool printTitle) const;

    // PRE: ---
    // DES: Imprime en la consola la lista de patinetes rotos
    // COM: O(n)
    void printBrokenScooters(bool printTitle) const;

    // PRE: Punteros a listas de patinetes existentes
    // DES: Imprime en la consola los patinetes de una lista de patinetes
    // COM: O(n)
    void printScootersList(Cola<Scooter*> *scooterQueue, bool isBrokenQueue, bool printTitle) const;

    // OTHER METHODS

    ~Station();
};
