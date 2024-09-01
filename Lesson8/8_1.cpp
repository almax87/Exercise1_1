#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

int function (std::string &str, int forbidden_length)
{
    if (str.length() != forbidden_length)
        return(str.length());
    else
        throw std::runtime_error("Вы ввели слово запретной длины! До свидания");        
}

int main()
{
    std::string str;
    int forbidden_length_{};
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length_;
    while(true)
    {

        std::cout << "Введите слово: ";
        std::cin >> str;
        try
        {
            int str_length {function(str, forbidden_length_)};
            std::cout << "Длина слова " << str << " равна " << str_length << std::endl;
        }
    
        catch (std::runtime_error& bad_length)
        {
            std::cout << bad_length.what() << std::endl;
            return 0;
        }
        catch (std::exception)
        {
            std::cout << "Неизвестная ошибка" << std::endl;
            return 1;
        }
    }
}