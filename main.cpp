#include <iostream>
#include "MexicanRestaurant.hpp"
#include "JapaneseRestaurant.hpp"
#include "MexicanJapaneseFusion.hpp"

using namespace std;

int main() {
    cout << "Testing Restaurant Inheritance Hierarchy:" << endl;
    MexicanRestaurant lacasa("La Casa", " 123 spice lane", 4);
    JapaneseRestaurant sakura("Sakura", "456 sushi road", true);
    MexicanJapaneseFusion fiesta("fusion fiesta","789 fusion ave", 3 , true);
    lacasa.displayInfo();
    lacasa.describeCuisine();
    fiesta.displaySpecialty();
    MenuItem tacos("Tacos", 8.99);
    MenuItem enchiladas("Enchiladas", 12.99);
    lacasa.addMenuItem(tacos);
    lacasa.addMenuItem(enchiladas);
    MenuItem SushiTacos("Sushi Tacos", 15.99);
    MenuItem wasabi("Wasabi Guacamole", 7.99);
    fiesta.addMenuItem(SushiTacos);
    fiesta.addMenuItem(wasabi);
    MenuItem roll("Sushi Roll", 14.99);
    MenuItem ramen("Ramen", 11.99);
    sakura.addMenuItem(roll);
    sakura.addMenuItem(ramen);
    lacasa.displayMenu();
    sakura.displayMenu();
    fiesta.displayMenu();

    return 0;
}
