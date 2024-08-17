#include "right_triangle.h"

void Right_triangle::check()
{
    if ((angleA_+angleB_+angleC_) != 180)
    throw FigureException{"сумма углов не равна 180"};
    else if (side_number != 3)
    throw FigureException {"сумма сторон не равна 3"};
    else if (angleC_ != 90)
    throw FigureException {"угол С не равен 90"};
};