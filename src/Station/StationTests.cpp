#include "StationTests.h"
#include "../utils/print.h"

void StationTests(){
  printTestStart("Station");
  Scooter *scooter =  new Scooter();
  Station station = Station("Y23SH8", "Calle Ortega y Gasset");
  station.addScooter(scooter);
  station.print();

  // Station station2 = Station(station);

  printTestEnd();
}
