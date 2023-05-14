#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <ctime>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0)); // Ініціалізуємо генератор випадкових чисел

    int secretNumber = rand() % 500 + 1; // Загадуємо число
    int guess;
    int attempts = 0;
    bool guessed = false;

    std::cout << "Вгадайте число від 1 до 500." << std::endl;

    while (!guessed) {
        std::cout << "Введіть вашу спробу (або 0 для виходу): ";
        std::cin >> guess;

        if (guess == 0) {
            std::cout << "Гра завершена. Ви вийшли." << std::endl;
            break;
        }

        attempts++;

        if (guess < secretNumber) {
            std::cout << "Загадане число більше." << std::endl;
        }
        else if (guess > secretNumber) {
            std::cout << "Загадане число менше." << std::endl;
        }
        else {
            std::cout << "Вітаємо! Ви вгадали число " << secretNumber << "!" << std::endl;
            guessed = true;
        }
    }

    std::cout << "Статистика:" << std::endl;
    std::cout << "Спроби: " << attempts << std::endl;

    return 0;
}
