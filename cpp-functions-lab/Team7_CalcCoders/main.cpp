#include <iostream>
#include <windows.h>
using namespace std;

// Функція користувача для обчислення
void calculator() {
    double a, b;
    char op;

    cout << "\nВведіть вираз (наприклад: 5 + 3): ";
    cin >> a >> op >> b;

    switch (op) {
    case '+': cout << "Результат: " << a + b << endl; break;
    case '-': cout << "Результат: " << a - b << endl; break;
    case '*': cout << "Результат: " << a * b << endl; break;
    case '/':
        if (b != 0)
            cout << "Результат: " << a / b << endl;
        else
            cout << "Помилка: ділення на нуль!" << endl;
        break;
    default:
        cout << "Невідомий оператор!" << endl;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "=== 🧮 Простий калькулятор (Calc Coders) ===\n";

    char again = 'y';


    // Цикл для багаторазового використання калькулятора
    while (again == 'y' || again == 'Y') {
        calculator();

        cout << "\nБажаєте виконати ще одне обчислення? (y/n): ";
        cin >> again;
    }

    cout << "\nДякуємо за використання калькулятора від Calc Coders! 💻\n";
    return 0;
}
