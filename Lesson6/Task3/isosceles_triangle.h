#pragma once
#include "triangle.h"

class Isosceles_triangle : public Triangle
{
    public:
    Isosceles_triangle(double sideA, double sideB, double angleA, double angleB)
    {
        this->name = "Равнобедренный треугольник";
        this->sideC = this->sideA = sideA;
        this->angleC = this->angleA = angleA;
        this->sideB = sideB;
        this->angleB = angleB;
    }

    Isosceles_triangle() : Isosceles_triangle (10, 20, 60, 60) {}

        bool check() override;
};