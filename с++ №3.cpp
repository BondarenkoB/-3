#include <iostream>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double usdToUah = 36.5;
    double EUROToUah = 40.2;
    double usdToEuro = 0.85;
    double euroToUah = usdToUah / usdToEuro;

    int choice;
    double amount;

    while (true) {
        std::cout << "Оберіть опцію:" << std::endl;
        std::cout << "1. Конвертувати USD в UAH" << std::endl;
        std::cout << "2. Конвертувати UAH в EURO" << std::endl;
        std::cout << "3. Конвертувати UAH в USD" << std::endl;
        std::cout << "4. Конвертувати USD в EURO" << std::endl;
        std::cout << "5. Конвертувати EURO в UAH" << std::endl;
        std::cout << "0. Вийти" << std::endl;

        std::cout << "Ваш вибір: ";
        std::cin >> choice;

        if (choice == 0) {
            std::cout << "До побачення!" << std::endl;
            break;
        }

        switch (choice) {
        case 1:
            std::cout << "Введіть суму в USD: ";
            std::cin >> amount;
            std::cout << "Еквівалентна сума в UAH: " << amount * usdToUah << std::endl;
            break;
        case 2:
            std::cout << "Введіть суму в UAH: ";
            std::cin >> amount;
            std::cout << "Еквівалентна сума в EURO: " << amount / EUROToUah << std::endl;
            break;
        case 3:
            std::cout << "Введіть суму в UAH: ";
            std::cin >> amount;
            std::cout << "Еквівалентна сума в USD: " << amount / usdToUah << std::endl;
            break;
        case 4:
            std::cout << "Введіть суму в USD: ";
            std::cin >> amount;
            std::cout << "Еквівалентна сума в EURO: " << amount * usdToEuro << std::endl;
            break;
        case 5:
            std::cout << "Введіть суму в EURO: ";
            std::cin >> amount;
            std::cout << "Еквівалентна сума в UAH: " << amount * euroToUah << std::endl;
            break;
        default:
            std::cout << "Некоректний вибір. Спробуйте ще раз." << std::endl;
            break;
        }
        std::cout << std::endl;
    }

    return 0;
}
