#include <iostream>
class Calculator
{
  private:
    double num1, num2;
  public:
    double add (double num1, double num2)
    {
      return num1+num2;  
    };
    double subtract_1_2 (double num1, double num2)
    {
      return num1-num2;  
    };
    double subtract_2_1 (double num2, double num1)
    {
      return num2-num1;  
    };
    double divide_1_2 (double num1, double num2)
    {
      return num1/num2;
    };
    double divide_2_1 (double num2, double num1)
    {
      return num2/num1;
    };
    double multiply (double num1, double num2)
    {
      return num1*num2;  
    }; 
    bool set_num1(double num1)
    {
      return (this -> num1 = num1 ? true : false);
    };
    bool set_num2(double num2)
    {
      return (this -> num2 = num2 ? true : false);
    };
};

int main() 
{
  double num1, num2;
  Calculator calc;
  while (true)
    {
      std::cout << "Введите num1: ";
      std::cin >> num1;
      std::cout << "Введите num2: ";
      std::cin >> num2;
      if (num1 == 0 || num2 == 0)
      {
        std::cout << "Неверное число!" << std::endl;
        continue;
      }
      calc.set_num1(num1);
      calc.set_num2(num2);
      std::cout << "num1+num2 = " << calc.add (num1, num2) << std::endl;
      std::cout << "num1-num2 = " << calc.subtract_1_2 (num1, num2) << std::endl;
      std::cout << "num2-num1 = " << calc.subtract_2_1 (num2, num1) << std::endl;
      std::cout << "num1/num2 = " << calc.divide_1_2 (num1, num2) << std::endl;
      std::cout << "num2/num1 = " << calc.divide_2_1 (num2, num1) << std::endl;
      std::cout << "num1*num2 = " << calc.multiply (num1, num2) << std::endl;
    }
  
  return 0;
}