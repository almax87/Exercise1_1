#include "counter.h"

void Counter::counter_increase()
{
  ++counter;
}
void Counter::counter_decrease()
{
  --counter;
}
int Counter::counter_get()
{
  return counter;
}