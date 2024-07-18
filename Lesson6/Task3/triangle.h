#pragma once
#include "figure.h"

class Triangle : public Figure
{
    protected:
        std::string name;
        double sideA, sideB, sideC;
        double angleA, angleB, angleC;
    public:
        Triangle (std::string name, int side_number, double sideA, double sideB, double sideC, double angleA, double angleB, double angleC)
        {
            this->name = name;
            this->side_number = side_number;
            this->sideA = sideA;
            this->sideB = sideB;
            this->sideC = sideC;
            this->angleA = angleA;
            this->angleB = angleB;
            this->angleC = angleC;
        }
        Triangle():Triangle ("Треугольник", 3, 10, 20, 30, 50, 60, 70){}
        std::string get_name ();
        int get_side_number ();
        double get_sideA ();
        double get_sideB ();
        double get_sideC ();
        double get_angleA (); 
        double get_angleB (); 
        double get_angleC ();
        void print_info() override;
        bool check()override;
};