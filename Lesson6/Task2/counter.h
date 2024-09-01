#pragma once
#include <iostream>
#include <string>

class Counter
{
  private:
    int counter;
  public:
    Counter(int counter_begin):counter(counter_begin){};
    Counter():counter(1){};
    void counter_increase();
    void counter_decrease();
    int counter_get();
};