#include <iostream>
#include <Windows.h>
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

    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }

    std::cout << "Сума чисел з діапазону " << start << " - " << end << " дорівнює " << sum << std::endl;

    return 0;
}
