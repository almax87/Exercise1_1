#pragma once
#include <iostream>
#include <string>
#include "exception.h"

class Figure
{
    protected:
        int side_number;
        std::string name;
    public:
    Figure(std::string name, int side_number) : name(name), side_number(side_number){};

    std::string get_name();
    double get_side_number();
    virtual void check(){};
    virtual void print_created(){};
};
