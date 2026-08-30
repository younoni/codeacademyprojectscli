#ifndef MEXICAN_JAPANESE_FUSION_HPP
#define MEXICAN_JAPANESE_FUSION_HPP

#include "MexicanRestaurant.hpp"
#include "JapaneseRestaurant.hpp"
#include "Restaurant.hpp"

class MexicanJapaneseFusion : public MexicanRestaurant, public JapaneseRestaurant{
  public:
  MexicanJapaneseFusion(string resname, string address, int spicelevel, bool tatami);
  void describeCuisine();
  void displaySpecialty();
};

#endif