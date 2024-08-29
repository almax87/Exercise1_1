#pragma once
#include "air.h"

class Magic_carpet : public Air
{
  public:
    Magic_carpet(double distance):Air(distance)
    {
      this->distance = distance;
      this->speed = 10;
      this->name = "Ковёр-самолёт";
      this->quotient_1 = 0.06;
    }

    double time_calculation() override;
};