#include "square.h"

bool Square::check() 
{
    return Quadrangle::check()&&(angleA==90)&&(angleB==90)&&(angleC==90)&&(angleD==90)&&(sideA == sideC)&&(sideB == sideD)&&(sideA == sideB);
} 