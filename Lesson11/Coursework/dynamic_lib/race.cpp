#include "race.h"
double Race::getDistance()
{
    return this->distance;
};
void Race::setDistance(double distance)
{
    if (distance <= 0)
        throw std::runtime_error("Вы ввели отрицательное значение!");
    else
        this->distance = distance;
};
void Race::setType(int type)
{
    if ((type < 1) || (type > 3))
        throw std::runtime_error("Вы ввели неверное значение!");
    this->race_type = static_cast<Transport_type>(type);
};
Race::Transport_type Race::getType()
{
    return this->race_type;
};
int Race::getParticipants()
{
    return this->participants;
};
void Race::increaseParticipants()
{
    this->participants++;
};
double Race::time_calculation() { return 0; };