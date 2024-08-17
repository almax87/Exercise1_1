#include "quadrangle.h"

std::string Quadrangle::get_name () {return name;}
int Quadrangle::get_side_number () {return side_number;}
double Quadrangle::get_sideA () {return sideA_;}
double Quadrangle::get_sideB () {return sideB_;}
double Quadrangle::get_sideC () {return sideC_;}
double Quadrangle::get_angleA () {return angleA_;}
double Quadrangle::get_angleB () {return angleB_;}
double Quadrangle::get_angleC () {return angleC_;}
double Quadrangle::get_sideD(){return sideD_;}
double Quadrangle::get_angleD(){return angleD_;}

void Quadrangle::print_created()
{
    std::cout << this->name << "(стороны " << get_sideA() << " " << get_sideB() << " " << get_sideC() << " " << get_sideD() << "; углы " << angleA_ << " " 
                            << angleB_ << " " << angleC_ << " " << angleD_ <<") создан" << std::endl;
}

void Quadrangle::check() 
{
    if (get_side_number() != 4)
        throw FigureException{"Количество сторон меньше 4"};
    if (get_angleA()+get_angleB()+get_angleC()+get_angleD() != 360)
        throw FigureException{"Сумма углов не равна 360"};
}