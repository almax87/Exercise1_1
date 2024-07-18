#include "romb.h"

bool Romb::check()
{
    return Quadrangle::check()&&(angleA==angleC)&&(angleB==angleD)&&(sideA == sideC)&&(sideB == sideD)&&(sideA==sideB);
} 