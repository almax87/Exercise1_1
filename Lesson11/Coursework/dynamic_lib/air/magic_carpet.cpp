#include "magic_carpet.h"

double Magic_carpet::time_calculation()
{
    if (distance < 1000)
        quotient_1 = 1;
    if ((distance < 5000) && (distance >= 1000))
        quotient_1 = 0.03;
    if ((distance < 10000) && (distance >= 5000))
        quotient_1 = 0.1;
    if (distance >= 10000)
        quotient_1 = 0.05;
    distance *= (1 - quotient_1);
    return distance / speed;
};