#pragma once
#include "air.h"

class Eagle : public Air
{
  public:
    Eagle(double distance):Air(distance)
    {
      this->distance = distance;
      this->speed = 8;
      this->name = "Орёл";
      this->quotient_1 = 0.06;
    }

    double time_calculation() override;
};