#include <iostream>

int main() {
  enum class months
  {
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december,
  };

  int month;
  while (true)
    {
      std::cout << "Введите номер месяца: ";
      std::cin >> month ;
      if (month == 0)
      {
        std::cout << "До свидания" << std::endl;
        break;
      }
      switch (static_cast<months>(month))
        {
          case months::january: std::cout << "январь" << std::endl; break;
          case months::february: std::cout << "февраль" << std::endl; break;
          case months::march: std::cout << "март" << std::endl; break;
          case months::april: std::cout << "апрель" << std::endl; break;
          case months::may: std::cout << "май" << std::endl; break;
          case months::june: std::cout << "июнь" << std::endl; break;
          case months::july: std::cout << "июль" << std::endl; break;
          case months::august: std::cout << "август" << std::endl; break;
          case months::september: std::cout << "сентябрь" << std::endl; break;
          case months::october: std::cout << "октябрь" << std::endl; break;
          case months::november: std::cout << "ноябрь" << std::endl; break;
          case months::december: std::cout << "декабрь" << std::endl; break;
          default: std::cout << "Неправильный номер!" << std::endl; break;
        }
    }

  return 0;
}