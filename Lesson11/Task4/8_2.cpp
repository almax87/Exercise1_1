#include "exception.h"
//#include "exception.cpp"
#include "figure.h"
//#include "figure.cpp"
#include "triangle.h"
//#include "triangle.cpp"
#include "right_triangle.h"
//#include "right_triangle.cpp"
#include "isosceles_triangle.h"
//#include "isosceles_triangle.cpp"
#include "equilateral_triangle.h"
//#include "equilateral_triangle.cpp"
#include "quadrangle.h"
//#include "quadrangle.cpp"
#include "rectangle.h"
//#include "rectangle.cpp"
#include "square.h"
//#include "square.cpp"
#include "parallelogramm.h"
//#include "parallelogramm.cpp"
#include "romb.h"
//#include "romb.cpp"
#include <locale>

int main ()
{
    setlocale(LC_ALL, "russian");
    try
    {
        Figure* triangle = new Triangle{3, 4, 5, 6, 40, 60, 90};
        triangle->print_created();
    }
    catch(const std::exception& ex)
    {
        std::cerr << "Ошибка создания фигуры. Причина: " << ex.what() << '\n';
    }
    try
    {
        Figure* right_triangle = new Right_triangle(3, 4, 10, 11, 40, 60, 80);
        right_triangle->print_created();
    }
    catch(const std::exception& ex)
    {
        std::cerr << "Ошибка создания фигуры. Причина: " << ex.what() << '\n';
    }
    try
    {
        Figure* isosceles_triangle = new Isosceles_triangle(3, 5, 10, 5, 50, 80, 50);
        isosceles_triangle->print_created();
    }
    catch(const std::exception& ex)
    {
        std::cerr << "Ошибка создания фигуры. Причина: " << ex.what() << '\n';
    }
    try
    {
        Figure* equilateral_triangle = new Equilateral_triangle(3, 4, 10, 5, 50, 80, 50);
        equilateral_triangle->print_created();
    }
    catch(const std::exception& ex)
    {
        std::cerr << "Ошибка создания фигуры. Причина: " << ex.what() << '\n';
    }
    try
    {
        Figure* quadrangle = new Quadrangle{4, 4, 10, 5, 6, 50, 80, 50, 100};
        quadrangle->print_created();
    }
    catch(const std::exception& ex)
    {
        std::cerr << "Ошибка создания фигуры. Причина: " << ex.what() << '\n';
    }
    try
    {
        Figure* square = new Square(4, 4, 10, 5, 6, 50, 80, 50, 100);
        square->print_created();
    }
    catch(const std::exception& ex)
    {
        std::cerr << "Ошибка создания фигуры. Причина: " << ex.what() << '\n';
    }
    try
    {
        Figure* rectangle = new Rectangle(4, 4, 10, 4, 10, 90, 90, 90, 90);
        rectangle->print_created();
    }
    catch(const std::exception& ex)
    {
        std::cerr << "Ошибка создания фигуры. Причина: " << ex.what() << '\n';
    }
    try
    {
        Figure* parallelogramm = new Parallelogramm(4, 4, 10, 5, 6, 50, 80, 50, 100);
        parallelogramm->print_created();
    }
    catch(const std::exception& ex)
    {
        std::cerr << "Ошибка создания фигуры. Причина: " << ex.what() << '\n';
    }
    try
    {
        Figure* romb = new Romb(4, 5, 10, 5, 10, 50, 130, 50, 130);
        romb->print_created();
    }
    catch(const std::exception& ex)
    {
        std::cerr << "Ошибка создания фигуры. Причина: " << ex.what() << '\n';
    }


    return 0;
}