#include <iostream>
#include <string>
struct address
{
    std::string city;
    std::string street;
    int house_number;
    int room_number;
    int index;
};
void print_address(address *link_address);

int main()
{
    address home_address = {"Нижний Новгород", "Веденяпина", 32, 24, 603000};
    address work_address = {"Киров", "Воровского", 43, 5, 610000};
    print_address(&home_address);
    std::cout << std::endl;
    print_address(&work_address);

    return 0;
}

void print_address(address *link_address)
{
    std::cout << "Город: " << (*link_address).city << std::endl
              << "Улица: " << (*link_address).street << std::endl
              << "Номер дома: " << (*link_address).house_number << std::endl
              << "Номер квартиры: " << (*link_address).room_number << std::endl
              << "Индекс: " << (*link_address).index
              << std::endl;
}