#pragma once
#include "quadrangle.h"

class Rectangle : public Quadrangle
{
    public:
        Rectangle(double sideA, double sideB)
        {
            this->name = "Прямоугольник";
            this->sideC = this->sideA;
            this->sideD = this->sideB;
            this->angleD = this->angleB = this->angleC = this->angleA = 90;
        }
        Rectangle() : Rectangle(10, 20) {}    

    bool check() override;
};
