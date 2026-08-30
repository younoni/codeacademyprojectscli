#include "Restaurant.hpp"
#include <iostream>
Restaurant::Restaurant(string n, string addr) : name(n), address(addr) {}
void Restaurant::displayInfo(){
  std::cout << name << address << endl;
}
void Restaurant::describeCuisine(){
  std::cout << "This restaurant serves various types of cuisines." << endl;
}
void Restaurant::displayMenu()
const {
  std::cout << name << " menu:" << std::endl;
  for (const auto& item : menu) {
    item.display();
  }
}
void Restaurant::addMenuItem(MenuItem item) {
    menu.push_back(item);
}

