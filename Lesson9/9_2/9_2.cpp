#include "Fraction.h"
#include "Fraction.cpp"

int main()
{
    int f1_num{}, f1_denom{},f2_num{}, f2_denom{}; 
    std::cout << "Введите числитель дроби 1: ";
    std::cin >> f1_num;
    std::cout << "Введите знаменатель дроби 1: ";
    std::cin >> f1_denom;
    std::cout << "Введите числитель дроби 2: ";
    std::cin >> f2_num;
    std::cout << "Введите знаменатель дроби 2: ";
    std::cin >> f2_denom;
	Fraction* fraction1 = new Fraction(f1_num, f1_denom);
    Fraction* fraction2 = new Fraction(f2_num, f2_denom);
    Fraction* fraction3 = new Fraction(0,0);

    *fraction3 = *fraction1 + *fraction2;
    Fraction::shorten_fraction(fraction3);
    std::cout << Fraction::print_fraction(fraction1) << " + " << Fraction::print_fraction(fraction2)<< " = " 
                << Fraction::print_fraction(fraction3) << std::endl;
    *fraction3 = *fraction1 - *fraction2;
    Fraction::shorten_fraction(fraction3);
    std::cout << Fraction::print_fraction(fraction1) << " - " << Fraction::print_fraction(fraction2)<< " = " 
                << Fraction::print_fraction(fraction3) << std::endl;
    *fraction3 = *fraction1 * *fraction2;
    Fraction::shorten_fraction(fraction3);
    std::cout << Fraction::print_fraction(fraction1) << " * " << Fraction::print_fraction(fraction2)<< " = " 
                << Fraction::print_fraction(fraction3) << std::endl;
    *fraction3 = *fraction1 / *fraction2;
    Fraction::shorten_fraction(fraction3);
    std::cout << Fraction::print_fraction(fraction1) << " / " << Fraction::print_fraction(fraction2)<< " = " 
                << Fraction::print_fraction(fraction3) << std::endl;
    *fraction3 = (++(*fraction1))*(*fraction2);
    Fraction::shorten_fraction(fraction3);
    --(*fraction1);
    std::cout << "++" << Fraction::print_fraction(fraction1) << " * " << Fraction::print_fraction(fraction2) 
                << " = " << Fraction::print_fraction(fraction3) << std::endl;
    ++(*fraction1);
    std::cout << "Значение дроби 1 = " << Fraction::print_fraction(fraction1) << std::endl;
    *fraction3 = ((*fraction1)--)*(*fraction2);
    Fraction::shorten_fraction(fraction3);
    (*fraction1)++;
    std::cout  << Fraction::print_fraction(fraction1) << "--" << " * " << Fraction::print_fraction(fraction2) 
                << " = " << Fraction::print_fraction(fraction3) << std::endl;
    (*fraction1)--;
    std::cout << "Значение дроби 1 = " << Fraction::print_fraction(fraction1) << std::endl;

	return 0;
}