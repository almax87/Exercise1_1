#include "figure.h"

    std::string Figure::get_name () {return name;}
    double Figure::get_side_number () {return side_number;}
    void Figure::print_info ()
    {
        std::cout << get_name() << ":" << std::endl;
        check() ? std::cout << "Правильная" : std::cout << "Неправильная";
        std::cout << std::endl;
        std::cout << "Количество сторон: " << get_side_number() << std::endl << std::endl;
    }
    bool Figure::check()
    {
        return (this->side_number == 0);
    }