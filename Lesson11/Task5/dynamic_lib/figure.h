#pragma once

#ifndef FIGURE_LIBRARY
#define FIGURE_LIB_API __declspec(dllexport)
#else
#define FIGURE_LIB_API __declspec(dllimport)
#endif

#include <iostream>
#include <string>
#include "exception.h"

class FIGURE_LIB_API Figure
{
    protected:
        int side_number;
        std::string name;
    public:
    Figure(std::string name, int side_number)
    {
        this->name = name;
        this->side_number = side_number;
    }

    std::string get_name();
    double get_side_number();  
    virtual void check();
    virtual void print_created();
};
