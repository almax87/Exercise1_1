#include "operations.h"
#include "operations.cpp"

int main() 
{
  double a, b, result;
  int operation;
  std::string operation_description;
  std::cout << "Введите первое число: ";
  std::cin >> a;
  std::cout << "Введите второе число: ";
  std::cin >> b;
  std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
  std::cin >> operation;
  result = calculation (a, b, operation, operation_description);
  std::cout << a << " " << operation_description << " " << b << " = " << result << std::endl;

  return 0;
}