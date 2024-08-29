#pragma once
#include <string>
#include "race.h"

class Transport : public Race
{
  protected:
    std::string name;
    double speed{};
    Transport_type transport_type{};
    bool participate {false};
    
  public:
      Transport() :Race() {};
      void setParticipate(Transport_type race_type);
      std::string getName();
      bool getParticipate();
};