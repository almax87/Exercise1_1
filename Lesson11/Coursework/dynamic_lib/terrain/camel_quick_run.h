#pragma once
#include "terrain.h"

class Camel_quick_run : public Terrain
{
    protected:
  public:
    Camel_quick_run(double distance):Terrain()
    {
      this->distance = distance;
      this->speed = 40;
      this->name = "Верблюд-быстроход";
      this->time_before_rest = 10;
      this->time_to_rest_1 = 5;
      this->time_to_rest_2 = 6.5;
      this->time_to_rest_3 = 8;
    }
    
};