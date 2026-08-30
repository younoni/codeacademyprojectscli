🍜 Restaurant Inheritance System

A C++ project demonstrating object-oriented programming (OOP) concepts through a restaurant management system.

The project creates different types of restaurants, including Mexican, Japanese, and Mexican-Japanese fusion restaurants. It also demonstrates restaurant menus, menu items, and different restaurant-specific features.

📌 Project Overview

This project focuses on building a restaurant system using C++ classes and inheritance.

The main.cpp file creates restaurant objects and tests their functionality, including displaying restaurant information, describing cuisines, adding menu items, and displaying menus.

✨ Features 🍴 Restaurant inheritance hierarchy 🇯🇵 Japanese restaurant class 🇲🇽 Mexican restaurant class 🌮 Mexican-Japanese fusion restaurant 🍱 Menu item management 💰 Menu items with prices 🪑 Japanese restaurant tatami seating option 📋 Restaurant information and menu display 🧩 Demonstration of object-oriented programming 🗂️ Project Files . ├── main.cpp ├── JapaneseRestaurant.cpp ├── JapaneseRestaurant.hpp ├── MexicanRestaurant.cpp ├── MexicanRestaurant.hpp ├── MexicanJapaneseFusion.cpp ├── MexicanJapaneseFusion.hpp ├── Restaurant.cpp ├── Restaurant.hpp └── README.md

The file structure above includes the project files used by the different restaurant classes.

🧬 Restaurant Types 🇯🇵 Japanese Restaurant

The Japanese restaurant supports a tatami seating option.

When tatami seating is available, the restaurant description includes that feature; otherwise, it simply describes the restaurant as serving traditional Japanese cuisine.

🍽️ Menu System

The program creates menu items with names and prices and adds them to different restaurants.

Example menu items used in the project include:

Tacos — $8.99 Enchiladas — $12.99 Sushi Tacos — $15.99 Wasabi Guacamole — $7.99 Sushi Roll — $14.99 Ramen — $11.99

These items are then displayed through the restaurants' menu systems.

🧪 Testing

The main.cpp file creates instances of the different restaurant classes and tests their functionality.

It tests:

Creating restaurant objects Displaying restaurant information Describing restaurant cuisines Displaying fusion specialties Creating menu items Adding menu items to restaurants Displaying restaurant menus 🛠️ Technologies C++ Object-Oriented Programming Classes Inheritance Header (.hpp) and source (.cpp) files ▶️ How to Run Compile

Using g++:

g++ *.cpp -o restaurant Run

Windows:

restaurant.exe

Linux/macOS:

./restaurant 🎯 Purpose

The purpose of this project is to demonstrate how C++ object-oriented programming can be used to create a restaurant system with different types of restaurants and shared functionality.

👤 Author

Younes Ahmed GitHub: younoni
