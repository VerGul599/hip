#include <Windows.h>
#include <iostream>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    std::cout << "Введите значение a: ";
    std::cin >> a;

    int sum = 0;
    for (int i = a; i <= 500; i++) 
    {
        sum += i;
    }

    std::cout << "Сумма целых чисел от " << a << " до 500 равна: " << sum;

    return 0;
}
