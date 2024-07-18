#pragma once
#include "quadrangle.h"

class Parallelogramm : public Quadrangle
{
    public:
        Parallelogramm(double sideA, double sideB, double angleA, double angleB): Quadrangle()
        {
            this->name = "Параллелограмм";
            this->sideA = this->sideC = sideA;
            this->sideB = this->sideD = sideB;
            this->angleA = this->angleC = angleA;
            this->angleB = this->angleD = angleB;
        }
    
    Parallelogramm() : Parallelogramm(20,30,30,40){}
    
    bool check() override;
};