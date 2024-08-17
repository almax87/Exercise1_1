#include <iostream>
#include <string>

int main()
{
    std::string name{};
    std::cout << "Input your name please: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}