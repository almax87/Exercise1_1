#pragma once
#include "terrain.h"

class Camel : public Terrain
{
  public:
    Camel(double distance):Terrain()
    {
      this->distance = distance;
      this->speed = 10;
      this->name = "Верблюд";
      this->time_before_rest = 30;
      this->time_to_rest_1 = 5;
      this->time_to_rest_2 = this->time_to_rest_3 = 8;
    }
};