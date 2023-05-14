#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;
    std::cout << "Введіть першу межу діапазону: ";
    std::cin >> a;
    std::cout << "Введіть другу межу діапазону: ";
    std::cin >> b;

    int start = (a < b) ? a : b;
    int end = (a < b) ? b : a;

    std::cout << "Парні числа з діапазону " << start << " - " << end << ":" << std::endl;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Непарні числа з діапазону " << start << " - " << end << ":" << std::endl;
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Числа, кратні семи з діапазону " << start << " - " << end << ":" << std::endl;
    for (int i = start; i <= end; i++) {
        if (i % 7 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
