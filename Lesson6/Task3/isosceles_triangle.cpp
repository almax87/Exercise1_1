#include "isosceles_triangle.h"

bool Isosceles_triangle::check()
{
    return Triangle::check()&&(angleC == angleA)&&(sideC == sideA);
}