#include <iostream>
#include "greeting.h"
#include "locale"

int main()
{
	setlocale(LC_ALL, "russian");
	std::string name;
	std::cout << "¬ведите им€: ";
	std::cin >> name;
	std::cout << Greeting::print_greeting(name) << std::endl;

	return 0;
}