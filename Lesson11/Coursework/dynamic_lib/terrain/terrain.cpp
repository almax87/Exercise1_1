#include "terrain.h"

double Terrain::time_calculation()
{
    double time = this->distance / this->speed;
    int rest = static_cast<int>(time / time_before_rest);
    if (rest == 1)
        return time + time_to_rest_1;
    else if (rest == 2)
        return time + time_to_rest_1 + time_to_rest_2;
    else if (rest > 2)
        return time + time_to_rest_1 + time_to_rest_2 + (rest - 2) * (time_to_rest_3);
    else
        return time;
}