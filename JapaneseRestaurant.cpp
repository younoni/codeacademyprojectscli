#include "JapaneseRestaurant.hpp"
#include <iostream>
JapaneseRestaurant::JapaneseRestaurant(string name, string addr, bool tatamiAvailable) : Restaurant( name, addr),
hasTatami(tatamiAvailable) {}
void JapaneseRestaurant::describeCuisine(){
  if (hasTatami == true){
    std::cout << "Traditional Japanese cuisine with tatami seating available" << endl;
  }
  else {
    std::cout << "Traditional Japanese cuisine" << endl;
  }
}