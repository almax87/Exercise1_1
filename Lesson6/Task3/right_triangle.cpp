#include "right_triangle.h"

bool Right_triangle::check()
{
    return Triangle::check()&&(get_angleC() == 90);
};