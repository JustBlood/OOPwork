#include <iostream>
#include "DynamicArray.h"

int fibonacci(int n) {
    if (n <= 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    // 1 часть задания - Фибоначчи
    int n;
    std::cout << "Введите количество чисел Фибоначчи: ";
    std::cin >> n;
    DynamicArray arr(n);

    for (int i = 0; i < n; i++) {
        arr[i] = fibonacci(i);
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    // 2 часть задания - #3
    std::cout << "Введите количество чисел в массиве: ";
    std::cin >> n;
    DynamicArray x(n);
    std::cout << "Введите " << n << " чисел:\n";
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int number;
        std::cin >> number;
        x[i] = number;
        sum += number;
    }
    int average = sum / x.getSize();

    std::cout << "Среднее арифметическое = " << average << std::endl;

    DynamicArray y(0); // > average
    DynamicArray z(0); // < average

    for (int i = 0; i < x.getSize(); i++) {
        if (x[i] > average) {
            y.resize(y.getSize() + 1);
            y[y.getSize() - 1] = x[i];
        }
        else {
            z.resize(z.getSize() + 1);
            z[z.getSize() - 1] = x[i];
        }
    }

    std::cout << "Числа в массиве 'y' (больше среднего арифметического):\n";
    for (int i = 0; i < y.getSize(); i++) {
        std::cout << i << " - " << y[i] << std::endl;
    }
    std::cout << "Числа в массиве 'z' (меньше либо равно среднего арифметического):\n";
    for (int i = 0; i < z.getSize(); i++) {
        std::cout << i << " - " << z[i] << std::endl;
    }

}