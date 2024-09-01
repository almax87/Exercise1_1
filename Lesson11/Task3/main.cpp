
#include <iostream>
#include "dynamic_lib/farewell.h"
#include <locale>
#include <Windows.h>

	int main()
	{
		SetConsoleOutputCP(1251);
		SetConsoleCP(1251);
		setlocale(LC_ALL, "russian");
		std::string name{};
		std::cout << "¬ведите им€: ";
		std::cin >> name;
		std::cout << Farewell::print_farewell(name) << std::endl;
		std::cin.get();
		std::cin.get();

		return 0;
}