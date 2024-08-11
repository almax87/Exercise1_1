#include "Fraction.h"
#include "cmath"

    Fraction Fraction::shorten_fraction (Fraction* fraction)
    {
        for (int i = 2; i <= abs(fraction->numerator_); i++)
        {
            while ((fraction->numerator_ % i == 0 ) && (fraction->denominator_ % i == 0))
            {
                fraction->numerator_ /= i;
                fraction->denominator_ /= i;
            };
        };
        return Fraction(fraction->numerator_, fraction->denominator_);
    }

    std::string Fraction::print_fraction (Fraction* fraction)
    {
        return std::to_string(fraction->numerator_) + "/" + std::to_string(fraction->denominator_);
    }
    
    Fraction Fraction::operator+ (const Fraction& other)
    {
        return Fraction(this->numerator_ * other.denominator_ + other.numerator_ * (*this).denominator_, (*this).denominator_*other.denominator_);
    }
    Fraction Fraction::operator - (const Fraction& other)
    {
        return Fraction((*this).numerator_ * other.denominator_ - other.numerator_ * (*this).denominator_, (*this).denominator_*other.denominator_);
    }
    Fraction Fraction::operator * (const Fraction& other)
    {
        return Fraction((*this).numerator_ * other.numerator_, (*this).denominator_*other.denominator_);
    }
    Fraction Fraction::operator / (const Fraction& other)
    {
        return Fraction((*this).numerator_ * other.denominator_, (*this).denominator_*other.numerator_);
    }
    Fraction Fraction::operator ++ ()
    {
        this->numerator_ += this->denominator_;
        return Fraction((*this).numerator_, (*this).denominator_);
    }
    Fraction Fraction::operator -- ()
    {
        this->numerator_ -= this->denominator_;
        return Fraction((*this).numerator_ - (*this).denominator_, (*this).denominator_);
    }
    Fraction Fraction::operator ++(int)
    {
        Fraction temp = *this;
        ++(*this);
        return temp;
    }
        Fraction Fraction::operator --(int)
    {
        Fraction temp = *this;
        --(*this);
        return temp;
    }