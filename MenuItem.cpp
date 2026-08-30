#include "MenuItem.hpp"
#include <iostream>
#include <iomanip>
MenuItem::MenuItem(string name, double price) : name(name), price(price) {}

void MenuItem::display()
const {
  std::cout << std::fixed << std::setprecision(2) << name << " - $" << price << endl;
}