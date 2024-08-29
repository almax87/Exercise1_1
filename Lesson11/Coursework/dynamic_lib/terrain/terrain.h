#pragma once
#include "../transport.h"

class Terrain : public Transport
{
  protected:
    double time_before_rest {};
    double time_to_rest_1 {};
    double time_to_rest_2 {};
    double time_to_rest_3 {};
  public:
    Terrain(double distance) : Transport()
    {
      this->distance = distance;
      this->transport_type = Transport_type::terrain;
      this->name = "Наземный";
    }
    Terrain() :Terrain(distance) {}

        double time_calculation() override;

};