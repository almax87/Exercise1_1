#include "triangle.h"

std::string Triangle::get_name () {return name;}
int Triangle::get_side_number () {return side_number;}
double Triangle::get_sideA () {return sideA;}
double Triangle::get_sideB () {return sideB;}
double Triangle::get_sideC () {return sideC;}
double Triangle::get_angleA () {return angleA;}
double Triangle::get_angleB () {return angleB;}
double Triangle::get_angleC () {return angleC;}
void Triangle::print_info()
{
    std::cout << get_name() << ":" << std::endl;
    check() ? std::cout << "Правильная\n" : std::cout << "Неправильная\n";
    std::cout << "Количество сторон: " << get_side_number() << std::endl;
    std::cout << "Стороны: " << "a = " << get_sideA() << " b = " << get_sideB()
                << " c = " << get_sideC() << std::endl;
    std::cout << "Углы: " << "A = " << get_angleA() << " B = " << get_angleB() << " C = " 
                << get_angleC() << std::endl << std::endl;
}
bool Triangle::check()
{
    return (this->side_number == 3)&&(get_angleA()+get_angleB()+get_angleC() == 180);
}

