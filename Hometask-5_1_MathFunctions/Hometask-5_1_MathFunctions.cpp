#include <iostream>
#include "math_functions.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    int x, y, command;

    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << "Введите второе число: ";
    std::cin >> y;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> command;

    switch (command) {
        case 1:
            std::cout << x << " + " << y << " = " << sum(x, y) << std::endl;
            break;
        case 2:
            std::cout << x << " - " << y << " = " << subtract(x, y) << std::endl;
            break;
        case 3:
            std::cout << x << " * " << y << " = " << multipl(x, y) << std::endl;
            break;
        case 4:
            if (y != 0) {
                std::cout << x << " / " << y << " = " << division(x, y) << std::endl;
            break;
            }
            else {
                do {
                    std::cout << "Ошибка! Деление на ноль." << std::endl;
                    std::cout << "Введите второе число: ";
                    std::cin >> y;
                } while (y == 0);
                std::cout << x << " / " << y << " = " << division(x, y) << std::endl;
                break;
            }
        case 5:
            std::cout << x << " в степени " << y << " = " << power(x, y) << std::endl;
            break;
        default: 
            break;
    }
    return 0;
}
