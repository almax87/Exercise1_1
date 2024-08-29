#pragma once
#include "../transport.h"

class Air : public Transport
{
  protected:
    double quotient_1 {};

  public:
      Air(double distance) : Transport()
      {
          this->transport_type = Transport_type::air;
          this->name = "Воздушный";
      };

    double time_calculation() override;
};