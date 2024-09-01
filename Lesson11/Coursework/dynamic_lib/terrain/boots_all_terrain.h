#pragma once
#include "terrain.h"

class Boots_all_terrain : public Terrain
{
  public:
    Boots_all_terrain(double distance):Terrain()
    {
      this->distance = distance;
      this->speed = 6;
      this->name = "Ботинки-вездеходы";
      this->time_before_rest = 60;
      this->time_to_rest_1 = 10;
      this->time_to_rest_2 = this->time_to_rest_3 = 5;
    }    
};