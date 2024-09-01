#pragma once
#include "terrain.h"

class Centaur : public Terrain
{
  public:
    Centaur(double distance):Terrain()
    {
      this->distance = distance;
      this->speed = 15;
      this->name = "Кентавр";
      this->time_before_rest = 8;
      this->time_to_rest_1 = this->time_to_rest_2 = this->time_to_rest_3 = 2;
    }    
};