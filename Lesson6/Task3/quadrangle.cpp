#include "quadrangle.h"

std::string Quadrangle::get_name () {return name;}
int Quadrangle::get_side_number () {return side_number;}
double Quadrangle::get_sideA () {return sideA;}
double Quadrangle::get_sideB () {return sideB;}
double Quadrangle::get_sideC () {return sideC;}
double Quadrangle::get_angleA () {return angleA;}
double Quadrangle::get_angleB () {return angleB;}
double Quadrangle::get_angleC () {return angleC;}
double Quadrangle::get_sideD(){return sideD;}
double Quadrangle::get_angleD(){return angleD;}

void Quadrangle::print_info () 
{
    std::cout << get_name() << ":" << std::endl;
    check() ? std::cout << "Правильная\n" : std::cout << "Неправильная\n";
    std::cout << "Стороны: " << "a = " << get_sideA() << " b = " << get_sideB()
                << " c = " << get_sideC() << " d = " << get_sideD() << std::endl;
    std::cout << "Углы: " << "A = " << get_angleA() << " B = " << get_angleB() << " C = " 
                << get_angleC() << " D = " << get_angleD() << std::endl << std::endl;
}

bool Quadrangle::check() 
{
    return (get_side_number() == 4)&&(get_angleA()+get_angleB()+get_angleC()+get_angleD() == 360);
}