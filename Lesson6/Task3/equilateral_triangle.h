#pragma once
#include "triangle.h"

class Equilateral_triangle : public Triangle
{
    public:
    Equilateral_triangle(double sideA, double angleA)
    {
        this->name = "Равносторонний треугольник";
        this->sideA = this->sideB = this->sideC = sideA;
        this->angleA = this->angleB = this->angleC = angleA;
    }

    Equilateral_triangle() : Equilateral_triangle(30, 60) {}

    bool check() override;
};