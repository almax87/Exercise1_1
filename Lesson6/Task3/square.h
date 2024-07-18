#pragma once
#include "quadrangle.h"

class Square : public Quadrangle
{
    public:
        Square(double sideA) : Quadrangle()
        {
            this->sideA = this->sideC = this->sideB = this->sideD = sideA;
            this->angleA = this->angleB = this->angleC = this->angleD = 90;
        }
    Square():Square(20){}
    bool check();
};