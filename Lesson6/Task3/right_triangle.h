#pragma once
#include "triangle.h"

class Right_triangle : public Triangle
{
    public:
    Right_triangle(double sideA, double sideB, double sideC, double angleA, double angleB)
    {
        this->name = "Прямоугольный треугольник";
        this->sideA = sideA;
        this->sideB = sideB;
        this->sideC = sideC;
        this->angleA = angleA;
        this->angleB = angleB;
        this->angleC = 90;
    }
    Right_triangle() : Right_triangle(10, 20, 30, 50, 60){}
    bool check() override;
};