#pragma once
#include "triangle.h"

class Right_triangle : public Triangle
{
    void check() override;

    public:
    Right_triangle(int side_number, double sideA, double sideB, double sideC, double angleA, double angleB, double angleC) : 
    Triangle(side_number,  sideA,  sideB,  sideC,  angleA,  angleB, angleC)
    {
        check();
        this->name = "Прямоугольный треугольник";
    }
};