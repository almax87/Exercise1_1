#pragma once
#include "quadrangle.h"

class Romb : public Quadrangle
{
    public:
        Romb(double sideA, double angleA, double angleB) : Quadrangle()
        {
            this->name = "Ромб";
            this->sideA = this->sideC = this->sideB = this->sideD = sideA;
            this->angleA = this->angleC = angleA;
            this->angleB = this->angleD = angleB;
        }

    Romb():Romb(30,30,40){}

    bool check() override;
};