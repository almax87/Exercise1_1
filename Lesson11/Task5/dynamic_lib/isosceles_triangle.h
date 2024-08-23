#pragma once
#include "triangle.h"

class FIGURE_LIB_API Isosceles_triangle : public Triangle
{
    public:
    Isosceles_triangle(int side_number, double sideA, double sideB, double sideC, double angleA, double angleB, double angleC) : 
    Triangle(side_number,  sideA,  sideB,  sideC,  angleA,  angleB, angleC)
    {
        check();
        this->name = "Равнобедренный треугольник";
    }

    void check() override;
};