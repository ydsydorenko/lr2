#include <iostream>
#include <cmath>     // підключення бібліотеки математичних функцій
#include <windows.h> // Для кодування UTF-8 у консолі
using namespace std;

int main()
{
    // Налаштування кодування UTF-8 для консолі Windows
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const double PI = 3.141592; // визначення дійсної константи pi

    // ЗАВДАННЯ 1 (11). Дано тризначне число.
    // Знайти суму і добуток його цифр.
    cout << "=== Завдання 1. Integer11 ===" << endl;
    int N, h, t, u, sum, prod; // декларація цілих змінних
    cout << "Введіть тризначне число N: ";
    cin >> N;

    h = N / 100;         // сотні  (ціла частина від ділення на 100)
    t = (N / 10) % 10;   // десятки
    u = N % 10;          // одиниці (залишок від ділення на 10)

    sum = h + t + u;      // сума цифр
    prod = h * t * u;     // добуток цифр

    cout << "Сума цифр числа = " << sum << endl;
    cout << "Добуток цифр числа = " << prod << endl << endl;

    // ЗАВДАННЯ 2 (12). Дано три цілих числа A, B, C.
    // Перевірити істинність висловлювання: «Кожне з чисел A, B, C додатне».
    cout << "=== Завдання 2. Boolean12 ===" << endl;
    int A, B, C; // декларація цілих змінних
    cout << "Введіть A: ";
    cin >> A;
    cout << "Введіть B: ";
    cin >> B;
    cout << "Введіть C: ";
    cin >> C;

    bool allPositive = (A > 0) && (B > 0) && (C > 0); // логічна змінна

    cout << "Кожне з чисел A, B, C додатне: " << boolalpha << allPositive << endl << endl;

    // ЗАВДАННЯ 3 (15).
    // y = log2|x| * sin^2(x + 35°) / ( 3^(x-1) * cbrt(2*pi + 0.5*cos(x)) )
    cout << "=== Завдання 3. Math.15 ===" << endl;
    double x, y, numerator, denominator; // декларація дійсних змінних
    cout << "Введіть дійсний аргумент x: ";
    cin >> x;

    numerator = log2(fabs(x)) * pow(sin(x + 35 * PI / 180.0), 2); // чисельник
    denominator = pow(3, x - 1) * cbrt(2 * PI + 0.5 * cos(x));    // знаменник
    y = numerator / denominator;

    cout << "Значення функції y = " << y << endl;

    return 0;
}