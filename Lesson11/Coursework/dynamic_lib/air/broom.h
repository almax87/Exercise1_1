#pragma once
#include "air.h"

class Broom : public Air
{
  public:
    Broom(double distance):Air(distance)
    {
      this->distance = distance;
      this->speed = 20;
      this->name = "Метла";
      this->quotient_1 = 0.01;
    }

    double time_calculation() override;
};