#include <iostream>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
        int num;
        int sum = 0;

        std::cout << "Введіть числа (введіть 0 для обчислення суми):" << std::endl;

        do {
            std::cout << "Введіть число: ";
            std::cin >> num;

            sum += num;
        } while (num != 0);

        std::cout << "Сума введених чисел: " << sum << std::endl;

        return 0;
    }

