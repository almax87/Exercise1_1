#pragma once
#include <iostream>
#include <string>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator):numerator_(numerator), denominator_(denominator) {}

    Fraction operator + (const Fraction& other);
    Fraction operator - (const Fraction& other);
    Fraction operator * (const Fraction& other);
    Fraction operator / (const Fraction& other);
    Fraction operator ++ ();
    Fraction operator -- ();
    Fraction operator ++ (int);
    Fraction operator -- (int);

    static std::string print_fraction (Fraction* fraction);
    static Fraction shorten_fraction (Fraction* fraction_);
};