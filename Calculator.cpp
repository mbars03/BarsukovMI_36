#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Калькулятор. Что делать?"<<endl;
    cout << "Введите операцию (+, -, *, /): ";
    char op;
    int a, b;
    cin >> op;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число число: ";
    cin >> b;
    switch (op) {
    case '+':
        cout << "Результат: " << a + b;
        break;
    case '-':
        cout << "Результат: " << a - b;
        break;
    case '*':
        cout << "Результат: " << a * b;
        break;
    case '/':
        cout << "Результат: " << a / b;
        break;
    }
}
