#pragma once
#include "quadrangle.h"

class Square : public Quadrangle
{
    public:
        Square(int side_number, double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD) : 
        Quadrangle (side_number, sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD)
        {
            check();
            this->name = "Квадрат";
        }

    void check() override;
};