#pragma once
#include <string>
#include <exception>
#include <stdexcept>

class FigureException : public std::exception
{
    private:
        std::string message;
    public:
        FigureException(std::string message) : message{message} {}

        const char* what() const noexcept override
        {
            return message.c_str();
        }
};  