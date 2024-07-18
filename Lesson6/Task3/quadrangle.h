#pragma once
#include "figure.h"

class Quadrangle : public Figure
{
    protected:
        std::string name;
        double sideA, sideB, sideC, sideD;
        double angleA, angleB, angleC, angleD;
    public:
    Quadrangle (int side_number, double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD)
    {
        this->name = "Четырехугольник";
        this->side_number = side_number;
        this->sideA = sideA;
        this->sideB = sideB;
        this->sideC = sideC;
        this->angleA = angleA;
        this->angleB = angleB;
        this->angleC = angleC;
        this->sideD = sideD;
        this->angleD = angleD;
    }
    Quadrangle() : Quadrangle(4,10,20,30,40,50,60,70,80) {}

    std::string get_name ();
    int get_side_number ();
    double get_sideA ();
    double get_sideB ();
    double get_sideC ();
    double get_angleA ();
    double get_angleB ();
    double get_angleC ();
    double get_sideD();
    double get_angleD();

    void print_info () override;
    bool check() override;
};