#include <iostream>
#include <windows.h>    

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    std::cout << "Введіть число: ";
    std::cin >> n;

    std::cout << "Числа від 0 до " << n << ":" << std::endl;
    for (int i = 0; i <= n; i++) {
        std::cout << i << " ";
    }

    return 0;
}
