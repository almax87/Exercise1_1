#include <iostream>
#include <string>

int function (std::string &str, int forbidden_length)
{
    if (str.length() != forbidden_length)
        return(str.length());
    else
        throw "Вы ввели слово запретной длины! До свидания";        
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
    
        catch (const char* bad_length)
        {
            std::cout << bad_length << std::endl;
            return 0;
        }
        catch (...)
        {
            std::cout << "Неизвестная ошибка" << std::endl;
            return 1;
        }
    }
}