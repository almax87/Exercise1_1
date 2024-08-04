#include <iostream>
#include <locale>

#define MODE 1

#ifndef MODE
#error "Не определена константа MODE"
#endif

int sum (int x, int y)
{
    return x+y;
}

int main()
{
setlocale (LC_ALL, "russian");

#if MODE==1
    std::cout << "Работаю в боевом режиме" << std::endl;
    int a,b;
    std::cout << "Введите число 1: ";
    std::cin >> a;
    std::cout << "Введите число 2: ";
    std::cin >> b;
    std::cout << "Результат сложения: " << sum(a,b) << std::endl;
#elif MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#else
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif

    return 0;
}