#include "isosceles_triangle.h"

void Isosceles_triangle::check()
{
    Triangle::check();
    if (angleC_ != angleA_)
        throw FigureException{"углы A и C не равны"};
    if (sideC_ != sideA_)
        throw FigureException{"стороны A и C не равны"};
}