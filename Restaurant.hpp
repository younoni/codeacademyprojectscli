#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP
#include "MenuItem.hpp"
#include <string>
#include <vector>
using namespace std;

class Restaurant {
protected:
std::vector<MenuItem> menu;
private:
string name;
string address;

public:
Restaurant(string n, string addr);
void displayInfo();
void describeCuisine();
void addMenuItem(MenuItem item);
void displayMenu() const;
};

#endif
