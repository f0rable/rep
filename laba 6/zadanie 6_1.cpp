#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    int sum = 0;
    cout << "Введите первое целое число: ";
    cin >> num1;
    cout << "Введите второе целое число: ";
    cin >> num2;
    for (int i = num1; i <= num2; i++) {
        sum += i;
    }
    cout << "Сумма всех целых чисел от " << num1 << " до " << num2 << " равна " << sum << endl;
    return 0;
}