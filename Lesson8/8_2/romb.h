#pragma once
#include "quadrangle.h"

class Romb : public Quadrangle
{
    public:
        Romb(int side_number, double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD) : 
        Quadrangle (side_number, sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD)
        {
            check();
            this->name = "Ромб";
        }

    void check() override;
};