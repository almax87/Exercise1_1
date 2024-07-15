#include <iostream>

class Shape
{
    protected:
        std::string shape_form;
        double side;
        
    public:

        Shape(std::string shape_form, double side)
        {
            this->shape_form = shape_form;
            this->side = side;
            print_shape (this->shape_form,this->side);
        }
        Shape(): Shape("Фигура",0) {}

        void print_shape (std::string shape_form, double side)
        {   
            std::cout << shape_form << ": " << side << std::endl;
        }
};

class Triangle : protected Shape
{
    public:
        Triangle ():Shape("Треугольник", 3) {}
};

class Quadrangle : protected Shape
{
    public:
        Quadrangle ():Shape ("Четырехугольник", 4) {}
};

int main ()
{
    std::cout << "Количество сторон: " << std::endl;
    Shape shape;
    Triangle triangle;
    Quadrangle quadrangle;

    return 0;
}