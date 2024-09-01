#include <iostream>
#include <string>

class Counter
{
  private:
    int counter;
  public:
    Counter (int counter_begin)
    {
      counter = counter_begin;
    };
    Counter ()
    {
      counter = 1;  
    };
    void counter_increase()
    {
      ++counter;  
    };
    void counter_decrease()
    {
      --counter;  
    };
    int counter_get()
    {
      return counter;
    };
};

int main() {
  std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
  std::string answer;
  std::getline(std::cin, answer);
  Counter counter;
  if (!answer.compare("да"))
    {
      int counter_begin;
      std::cout << "Введите начальное значение счетчика: ";
      std::cin >> counter_begin;
      Counter init_counter (counter_begin);
      counter = init_counter;
    }
  char command;
  do
    {
      std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
      std::cin >> command;
      switch (command)
        {
          case '+': counter.counter_increase(); break;
          case '-': counter.counter_decrease(); break;
          case '=': std::cout << counter.counter_get() << std::endl; break;
          case 'x': std::cout << "До свидания!" << std::endl; break;
          default: break;
        } 
    } while (command != 'x');
  
  return 0;
}