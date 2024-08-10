#pragma once
#include "quadrangle.h"

class Parallelogramm : public Quadrangle
{
    public:
        Parallelogramm(int side_number, double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD) : 
        Quadrangle (side_number, sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD)
        {
            check();
            this->name = "Параллелограмм";
        }

    void check() override;
};