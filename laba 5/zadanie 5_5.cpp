#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char operation;
    cout << "Введите выражение: ";
    cin >> num1 >> operation >> num2;
    switch (operation) {
        case '+':
            cout << "Результат: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Результат: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Результат: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Ошибка: деление на ноль" << endl;
            } else {
                cout << "Результат: " << num1 / num2 << endl;
            }
            break;
        case '%':
            if (num2 == 0) {
                cout << "Ошибка: деление на ноль" << endl;
            } else {
                cout << "Результат: " << (int)num1 % (int)num2 << endl;
            }
            break;
    }
    return 0;
}