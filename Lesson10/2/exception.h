#pragma once
#include <exception>
#include <stdexcept>

class FigureException : public std::domain_error
{
    using std::domain_error::domain_error;
};  