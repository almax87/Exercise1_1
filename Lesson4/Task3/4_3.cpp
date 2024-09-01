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

    std::string get_name () {return name;}
    double get_side_number () {return side_number;}

    Figure():Figure("Фигура", 0) {}
    
    virtual void print_info ()
    {
        std::cout << get_name() << ":" << std::endl;
        check() ? std::cout << "Правильная" : std::cout << "Неправильная";
        std::cout << std::endl;
        std::cout << "Количество сторон: " << get_side_number() << std::endl << std::endl;
    }

    virtual bool check()
    {
        return (this->side_number == 0);
    }
};

class Triangle : public Figure
{
    protected:
        std::string name;
        double sideA, sideB, sideC;
        double angleA, angleB, angleC;

    public:
        Triangle (std::string name, int side_number, double sideA, double sideB, double sideC, double angleA, double angleB, double angleC)
        {
            this->name = name;
            this->side_number = side_number;
            this->sideA = sideA;
            this->sideB = sideB;
            this->sideC = sideC;
            this->angleA = angleA;
            this->angleB = angleB;
            this->angleC = angleC;
        }

        Triangle():Triangle ("Треугольник", 3, 10, 20, 30, 50, 60, 70)
        {
        }

        std::string get_name () {return name;}
        int get_side_number () {return side_number;}
        double get_sideA () {return sideA;}
        double get_sideB () {return sideB;}
        double get_sideC () {return sideC;}
        double get_angleA () {return angleA;}
        double get_angleB () {return angleB;}
        double get_angleC () {return angleC;}

        void print_info() override
        {
            std::cout << get_name() << ":" << std::endl;
            check() ? std::cout << "Правильная\n" : std::cout << "Неправильная\n";
            std::cout << "Количество сторон: " << get_side_number() << std::endl;
            std::cout << "Стороны: " << "a = " << get_sideA() << " b = " << get_sideB()
                        << " c = " << get_sideC() << std::endl;
            std::cout << "Углы: " << "A = " << get_angleA() << " B = " << get_angleB() << " C = " 
                        << get_angleC() << std::endl << std::endl;
        }

        bool check() override
        {
            return (this->side_number == 3)&&(get_angleA()+get_angleB()+get_angleC() == 180);
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
        this->angleB = angleB;
        this->angleC = 90;
    }
    Right_triangle() : Right_triangle(10, 20, 30, 50, 60){}

    bool check() override
    {
        return Triangle::check()&&(angleC == 90);
    }
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

    Isosceles_triangle() : Isosceles_triangle (10, 20, 60, 60) {}

        bool check() override
    {
        return Triangle::check()&&(angleC == angleA)&&(sideC == sideA);
    }
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

    bool check() override
    {
        return Triangle::check()&&(angleA == 60)&&(angleB == 60)&&(angleC==60)&&(sideC == sideA)&&(sideB == sideA)&&(sideB == sideC);
    }

};

class Quadrangle : public Figure
{
    protected:
        std::string name;
        double sideA, sideB, sideC, sideD;
        double angleA, angleB, angleC, angleD;
    public:
    Quadrangle (int side_number, double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD)
    {
        this->name = "Четырехугольник";
        this->side_number = side_number;
        this->sideA = sideA;
        this->sideB = sideB;
        this->sideC = sideC;
        this->angleA = angleA;
        this->angleB = angleB;
        this->angleC = angleC;
        this->sideD = sideD;
        this->angleD = angleD;
    }
    Quadrangle() : Quadrangle(4,10,20,30,40,50,60,70,80) {}

    std::string get_name () {return name;}
    int get_side_number () {return side_number;}
    double get_sideA () {return sideA;}
    double get_sideB () {return sideB;}
    double get_sideC () {return sideC;}
    double get_angleA () {return angleA;}
    double get_angleB () {return angleB;}
    double get_angleC () {return angleC;}
    double get_sideD(){return sideD;}
    double get_angleD(){return angleD;}


    void print_info () override
    {
        std::cout << get_name() << ":" << std::endl;
        check() ? std::cout << "Правильная\n" : std::cout << "Неправильная\n";
        std::cout << "Стороны: " << "a = " << get_sideA() << " b = " << get_sideB()
                    << " c = " << get_sideC() << " d = " << get_sideD() << std::endl;
        std::cout << "Углы: " << "A = " << get_angleA() << " B = " << get_angleB() << " C = " 
                    << get_angleC() << " D = " << get_angleD() << std::endl << std::endl;
    }

    bool check() override
    {
        return (get_side_number() == 4)&&(get_angleA()+get_angleB()+get_angleC()+get_angleD() == 360);
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

    bool check() override
    {
        return Quadrangle::check()&&(angleA==90)&&(angleB==90)&&(angleC==90)&&(angleD==90)&&(sideA == sideC)&&(sideB == sideD);
    }
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
    bool check() override
    {
        return Quadrangle::check()&&(angleA==90)&&(angleB==90)&&(angleC==90)&&(angleD==90)&&(sideA == sideC)&&(sideB == sideD)&&(sideA == sideB);
    } 
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
    
    bool check() override
    {
        return Quadrangle::check()&&(angleA==angleC)&&(angleB==angleD)&&(sideA == sideC)&&(sideB == sideD);
    } 
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

    bool check() override
    {
        return Quadrangle::check()&&(angleA==angleC)&&(angleB==angleD)&&(sideA == sideC)&&(sideB == sideD)&&(sideA==sideB);
    } 
};

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