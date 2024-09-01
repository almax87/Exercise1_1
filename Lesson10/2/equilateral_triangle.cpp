#include "equilateral_triangle.h"

void Equilateral_triangle::check()
{
    Triangle::check();
    if ((angleC_ != angleA_)&&(angleB_ != angleA_)&&(angleC_ != angleB_))
        throw FigureException{"углы не равны"};
    if ((sideC_ != sideA_)&&(sideB_ != sideA_)&&(sideC_ != sideA_))
        throw FigureException{"стороны не равны"};
}  