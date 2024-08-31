#include <iostream>
#include <locale>

int count_max (int* arr, int init_point, int arr_size)
{
    
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[arr_size/2] == init_point)
            return arr_size - arr_size/2 - 1;
        else if (init_point < arr[arr_size/2])
        {
           if (init_point == arr[arr_size/2 - i])
            return arr_size - arr_size/2 + i - 1;
        }
        else
        {
            if (init_point == arr[arr_size/2 + i])
                return arr_size - arr_size/2 - i - 1;
        } 
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL,"russian");
    int init_point{};
    int arr[] {1, 23, 44, 56, 77, 77, 89, 100, 100, 101, 101, 105};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    std::cout << "Введите точку отсчета: ";
    std::cin >> init_point;
    std::cout << "Количество элементов в массиве больших чем " << init_point << ": " << count_max(arr, init_point, arr_size) << std::endl;

    std::cin.get();
    std::cin.get();

    return 0;
}