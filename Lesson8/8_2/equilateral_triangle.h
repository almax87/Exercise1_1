#pragma once
#include "triangle.h"

class Equilateral_triangle : public Triangle
{
    public:
    Equilateral_triangle(int side_number, double sideA, double sideB, double sideC, double angleA, double angleB, double angleC) : 
    Triangle(side_number,  sideA,  sideB,  sideC,  angleA,  angleB, angleC)
    {
        check();
        this->name = "Равносторонний треугольник";
    }

    virtual void check() override;
};