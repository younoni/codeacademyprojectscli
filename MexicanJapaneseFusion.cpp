#include "MexicanJapaneseFusion.hpp"
#include <iostream>
MexicanJapaneseFusion::MexicanJapaneseFusion(string resname, string address, int spicelevel, bool tatami) : Restaurant(resname, address),
MexicanRestaurant(resname, address, spicelevel),
JapaneseRestaurant(resname, address, tatami) {}

void MexicanJapaneseFusion::describeCuisine(){
  std::cout << "A unique fusion of mexican and japanese cuisines" << endl;
}
void MexicanJapaneseFusion::displaySpecialty(){
  std::cout << "Our specialties combine both cuisines - try our Sushi Tacos and Wasabi Guacamole!" << endl;
}
