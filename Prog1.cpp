#include <iostream>

int main() {
    int number;

    // Введення даних
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Перевірка числа
    if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl;
    }
    else {
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}