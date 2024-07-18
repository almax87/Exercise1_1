#include "equilateral_triangle.h"

bool Equilateral_triangle::check()
{
    return Triangle::check()&&(angleA == 60)&&(angleB == 60)&&(angleC==60)&&(sideC == sideA)&&(sideB == sideA)&&(sideB == sideC);
}