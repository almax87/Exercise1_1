#include "operations.h"
#include <cmath>

double calculation(double a, double b, int operation, std::string& l_operation_description)
{
  switch (operation)
    {
      case 1: l_operation_description = "плюс"; return a+b;
      case 2: l_operation_description = "минус"; return a-b;
      case 3: l_operation_description = "умножить на"; return a*b;
      case 4: l_operation_description = "разделить на"; return a/b;
      case 5: l_operation_description = "в степени"; return  std::pow(a,b);
      default: return 0;
    };
}