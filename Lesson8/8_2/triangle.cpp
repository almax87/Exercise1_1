#include "triangle.h"

std::string Triangle::get_name () {return name;}
int Triangle::get_side_number () {return side_number;}
double Triangle::get_sideA () {return sideA_;}
double Triangle::get_sideB () {return sideB_;}
double Triangle::get_sideC () {return sideC_;}
double Triangle::get_angleA () {return angleA_;}
double Triangle::get_angleB () {return angleB_;}
double Triangle::get_angleC () {return angleC_;}
void Triangle::print_created()
{
    std::cout << this->name << "(стороны " << get_sideA() << " " << get_sideB() << " " << get_sideC() << "; углы " << angleA_ << " " 
                            << angleB_ << " " << angleC_ << ") создан" << std::endl;
}
void Triangle::check()
{
    if ((angleA_+angleB_+angleC_) != 180)
        throw FigureException{"сумма углов не равна 180"};
    else if (side_number != 3)
        throw FigureException {"количество сторон не равно 3"};
}