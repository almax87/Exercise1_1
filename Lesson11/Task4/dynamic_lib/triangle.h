#pragma once
#include "figure.h"
class FIGURE_LIB_API Triangle : public Figure
{
    protected:
        std::string name;
        double sideA_, sideB_, sideC_;
        double angleA_, angleB_, angleC_;
        int side_number;
    public:
        Triangle (int side_number, double sideA, double sideB, double sideC, double angleA, double angleB, double angleC) : 
        Figure (name, side_number), side_number(side_number), sideA_(sideA), sideB_(sideB), sideC_(sideC), angleA_(angleA), angleB_(angleB), angleC_(angleC)
        {
            check();
            this->name = "Треугольник";  
        }    
 
        std::string get_name ();
        int get_side_number ();
        double get_sideA ();
        double get_sideB ();
        double get_sideC ();
        double get_angleA (); 
        double get_angleB (); 
        double get_angleC ();
        void check() override;
        void print_created();
};