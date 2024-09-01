#pragma once

#ifndef FIGURE_LIBRARY
#define FIGURE_LIB_API __declspec(dllexport)
#else
#define FIGURE_LIB_API __declspec(dllimport)
#endif

#include <string>
#include <exception>
#include <stdexcept>

class FIGURE_LIB_API FigureException : public std::domain_error
{
    using std::domain_error::domain_error;
};  