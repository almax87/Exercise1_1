#pragma once
#include <iostream>
#include <exception>
#include <stdexcept>

class Race
{
  public:
    enum class Transport_type {terrain = 1, air, mixed};
  protected:
    double distance{};
    Transport_type race_type{Transport_type::terrain};
    int participants {};
  public:
      Race(Transport_type race_type) : race_type(race_type) {};
    Race() :Race(race_type) {};

    double getDistance();
    void setDistance(double distance);
    void setType(int type);
    Transport_type getType();
    int getParticipants();
    void increaseParticipants();
    virtual double time_calculation();

};

