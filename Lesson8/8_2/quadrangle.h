#pragma once
#include "figure.h"

class Quadrangle : public Figure
{
    protected:
        std::string name;
        double sideA_, sideB_, sideC_, sideD_;
        double angleA_, angleB_, angleC_, angleD_;
        int side_number;
    public:
    Quadrangle (int side_number, double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD):
    Figure (name, side_number), side_number(side_number), sideA_(sideA), sideB_(sideB), sideC_(sideC), sideD_(sideD), angleA_(angleA), angleB_(angleB),
             angleC_(angleC), angleD_(angleD)
    {
        check();
        this->name = "Четырехугольник";
    }
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
    void print_created() override;
    void check() override;
};