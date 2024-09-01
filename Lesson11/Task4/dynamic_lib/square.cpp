#include "square.h"

void Square::check() 
{
    Quadrangle::check();
    if ((angleA_!=90)&&(angleB_!=90)&&(angleC_ != 90)&&(angleD_ != 90))
        throw FigureException{"Углы не равны 90"};
    if ((sideA_ != sideC_)&&(sideB_ != sideD_)&&(sideA_ != sideB_))
        throw FigureException{"Стороны не равны"};
} 