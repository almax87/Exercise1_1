#include "broom.h"

double Broom::time_calculation()
{
    if (distance > 1000)
        quotient_1 *= static_cast<int>(distance / 1000);
    distance *= (1 - quotient_1);
    return distance / speed;
};