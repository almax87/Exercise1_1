#include "figure.h"
#include "figure.cpp"
#include "triangle.h"
#include "triangle.cpp"
#include "right_triangle.h"
#include "right_triangle.cpp"
#include "isosceles_triangle.h"
#include "isosceles_triangle.cpp"
#include "equilateral_triangle.h"
#include "equilateral_triangle.cpp"
#include "quadrangle.h"
#include "quadrangle.cpp"
#include "rectangle.h"
#include "rectangle.cpp"
#include "square.h"
#include "square.cpp"
#include "parallelogramm.h"
#include "parallelogramm.cpp"
#include "romb.h"
#include "romb.cpp"

int main ()
{
    Figure* figure = new Figure();
    figure->print_info();
    Figure* triangle = new Triangle();
    triangle->print_info();
    Figure* right_triangle = new Right_triangle();
    right_triangle->print_info();
    Figure* isosceles_triangle = new Isosceles_triangle();
    isosceles_triangle->print_info();
    Figure* equilateral_triangle = new Equilateral_triangle();
    equilateral_triangle->print_info();
    Figure* quadrangle = new Quadrangle();
    quadrangle->print_info();
    Figure* rectangle = new Rectangle();
    rectangle->print_info();
    Figure* square = new Square();
    square->print_info();
    Figure* parallelogramm = new Parallelogramm();
    parallelogramm->print_info();
    Figure* romb = new Romb();
    romb->print_info();
     
    return 0;
}