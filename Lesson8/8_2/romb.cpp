#include "romb.h"

void Romb::check()
{
    Quadrangle::check();
    if ((sideA_ != sideC_)&&(sideB_ != sideD_)&&(sideA_ != sideB_))
        throw FigureException{"Стороны не равны"};
    if ((angleA_ != angleC_)&&(angleB_ != angleD_))
        throw FigureException{"Углы попарно не равны"};
} 