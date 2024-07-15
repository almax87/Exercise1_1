#include <iostream>


class Triangle
{
    protected:
        std::string name;
        double sideA, sideB, sideC;
        double angleA, angleB, angleC;

    public:
        Triangle (std::string name, double sideA, double sideB, double sideC, double angleA, double angleB, double angleC)
        {
            this->name = name;
            this->sideA = sideA;
            this->sideB = sideB;
            this->sideC = sideC;
            this->angleA = angleA;
            this->angleB = angleB;
            this->angleC = angleC;
        }

        Triangle():Triangle ("Треугольник", 10, 20, 30, 50, 60, 70){}

        std::string get_name () {return name;}
        double get_sideA () {return sideA;}
        double get_sideB () {return sideB;}
        double get_sideC () {return sideC;}
        double get_angleA () {return angleA;}
        double get_angleB () {return angleB;}
        double get_angleC () {return angleC;}

        void print_info (Triangle *triangle)
        {
            std::cout << get_name() << ": " << std::endl;
            std::cout << "Стороны: " << "a = " << get_sideA() << " b = " << get_sideB()
                        << " c = " << get_sideC() << std::endl;
            std::cout << "Углы: " << "A = " << get_angleA() << " B = " << get_angleB() << " C = " 
                        << get_angleC() << std::endl << std::endl;
        }
};

class Right_triangle : public Triangle
{
    public:
    Right_triangle(double sideA, double sideB, double sideC, double angleA, double angleB)
    {
        this->name = "Прямоугольный треугольник";
        this->sideA = sideA;
        this->sideB = sideB;
        this->sideC = sideC;
        this->angleA = angleA;
        this->angleB = angleC;
        this->angleC = 90;
    }
    Right_triangle() : Right_triangle(10, 20, 30, 40, 50){}
};

class Isosceles_triangle : public Triangle
{
    public:
    Isosceles_triangle(double sideA, double sideB, double angleA, double angleB)
    {
        this->name = "Равнобедренный треугольник";
        this->sideC = this->sideA = sideA;
        this->angleC = this->angleA = angleA;
        this->sideB = sideB;
        this->angleB = angleB;
    }

    Isosceles_triangle() : Isosceles_triangle (10, 20, 50, 60) {}
};

class Equilateral_triangle : public Triangle
{
    public:
    Equilateral_triangle(double sideA, double angleA)
    {
        this->name = "Равносторонний треугольник";
        this->sideA = this->sideB = this->sideC = sideA;
        this->angleA = this->angleB = this->angleC = angleA;
    }

    Equilateral_triangle() : Equilateral_triangle(30, 60) {}
};

class Quadrangle
{
    protected:
        std::string name;
        double sideA, sideB, sideC, sideD;
        double angleA, angleB, angleC, angleD;
    public:
    Quadrangle (double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD)
    {
        this->name = "Четырехугольник";
        this->sideA = sideA;
        this->sideB = sideB;
        this->sideC = sideC;
        this->angleA = angleA;
        this->angleB = angleB;
        this->angleC = angleC;
        this->sideD = sideD;
        this->angleD = angleD;
    }
    Quadrangle() : Quadrangle(10,20,30,40,50,60,70,80) {}

    std::string get_name () {return name;}
    double get_sideA () {return sideA;}
    double get_sideB () {return sideB;}
    double get_sideC () {return sideC;}
    double get_angleA () {return angleA;}
    double get_angleB () {return angleB;}
    double get_angleC () {return angleC;}
    double get_sideD(){return sideD;}
    double get_angleD(){return angleD;}


    void print_info (Quadrangle *quadrangle)
    {
        std::cout << get_name() << ": " << std::endl;
        std::cout << "Стороны: " << "a = " << get_sideA() << " b = " << get_sideB()
                    << " c = " << get_sideC() << " d = " << get_sideD() << std::endl;
        std::cout << "Углы: " << "A = " << get_angleA() << " B = " << get_angleB() << " C = " 
                    << get_angleC() << " D = " << get_angleD() << std::endl << std::endl;
    }

};

class Rectangle : public Quadrangle
{
    public:
        Rectangle(double sideA, double sideB)
        {
            this->name = "Прямоугольник";
            this->sideC = this->sideA;
            this->sideD = this->sideB;
            this->angleD = this->angleB = this->angleC = this->angleA = 90;
        }
        Rectangle() : Rectangle(10, 20) {}    
};

class Square : public Quadrangle
{
    public:
        Square(double sideA) : Quadrangle()
        {
            this->sideA = this->sideC = this->sideB = this->sideD = sideA;
            this->angleA = this->angleB = this->angleC = this->angleD = 90;
        }
    Square():Square(20){}
};

class Parallelogramm : public Quadrangle
{
    public:
        Parallelogramm(double sideA, double sideB, double angleA, double angleB): Quadrangle()
        {
            this->name = "Параллелограмм";
            this->sideA = this->sideC = sideA;
            this->sideB = this->sideD = sideB;
            this->angleA = this->angleC = angleA;
            this->angleB = this->angleD = angleB;
        }
    
    Parallelogramm() : Parallelogramm(20,30,30,40){}
};

class Romb : public Quadrangle
{
    public:
        Romb(double sideA, double angleA, double angleB) : Quadrangle()
        {
            this->name = "Ромб";
            this->sideA = this->sideC = this->sideB = this->sideD = sideA;
            this->angleA = this->angleC = angleA;
            this->angleB = this->angleD = angleB;
        }

    Romb():Romb(30,30,40){}
};

int main ()
{
    Triangle triangle;
    triangle.print_info(&triangle);
    Right_triangle right_triangle;
    right_triangle.print_info(&right_triangle);
    Isosceles_triangle isosceles_triangle;
    isosceles_triangle.print_info(&isosceles_triangle);
    Equilateral_triangle equilateral_triangle;
    equilateral_triangle.print_info(&equilateral_triangle);

    Quadrangle quadrangle;
    quadrangle.print_info(&quadrangle);
    Rectangle rectangle;
    rectangle.print_info(&rectangle);
    Square square;
    square.print_info(&square);
    Parallelogramm parellelogramm;
    parellelogramm.print_info(&parellelogramm);
    Romb romb;
    romb.print_info(&romb);
    
    return 0;
}