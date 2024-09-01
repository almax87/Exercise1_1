#include <iostream>
#include "farewell.h"
#include "locale"

int main()
{
	setlocale(LC_ALL, "russian");
	std::string name{};
	std::cout << "¬ведите им€: ";
	std::cin >> name;
	std::cout << Farewell::print_farewell(name) << std::endl;
	std::cin.get();
	std::cin.get();

	return 0;
}