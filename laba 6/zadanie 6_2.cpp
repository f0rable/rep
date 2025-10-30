#include <iostream>
using namespace std;
int main() {
    double number;
    double sum = 0;
    while (true) {
        cout << "Введите число: ";
        cin >> number;
        if (number == 0) {
            cout << "Итоговая сумма: " << sum << endl;
            break;
        }
        sum += number;
        cout << "Накопленная сумма: " << sum << endl;
        cout << endl;
    }
    return 0;
}