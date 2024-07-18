#pragma once
#include <iostream>
#include <string>

class Figure
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
    Figure():Figure("Фигура", 0) {}

    std::string get_name ();
    double get_side_number ();  
    virtual void print_info ();
    virtual bool check();
};
