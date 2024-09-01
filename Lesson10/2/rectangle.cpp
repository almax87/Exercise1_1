#include "rectangle.h"

void Rectangle::check()
{
        Quadrangle::check();
    if ((angleA_!=90)&&(angleB_!=90)&&(angleC_ != 90)&&(angleD_ != 90))
        throw FigureException{"Углы не равны 90"};
    if ((sideA_ != sideC_)&&(sideB_ != sideD_))
        throw FigureException{"Стороны попарно не равны"};
}