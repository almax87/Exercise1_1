#include <iostream>
#include <string>
#include <iomanip>
double change_balance(double *link_balance);

int main()
{
    struct bank_account
    {
        long number;
        std::string owner_name;
        double balance;
    };
    bank_account account_1;
    std::cout << "Введите номер счета: ";
    std::cin >> account_1.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> account_1.owner_name;
    std::cout << "Введите баланс: ";
    std::cin >> account_1.balance;
    change_balance(&account_1.balance);
    
    std::cout << "Ваш счет: " << account_1.owner_name << ", " << account_1.number << ", " << std::fixed << std::setprecision(2) << account_1.balance << std::endl;

    return 0;    
}

double change_balance(double *link_balance)
{
    std::cout << "Введите новый баланс: ";
    std::cin >> *link_balance;
    return *link_balance;
}