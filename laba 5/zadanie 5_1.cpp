#include <iostream>
using namespace std;
void proverka(int n) {
    cout << "Число " << n << " является " << (n % 2 == 0 ? "чётным" : "нечётным") << endl;
    cout << "Делится на 3: " << (n % 3 == 0 ? "Да" : "Нет") << endl;
    cout << "Делится на 5: " << (n % 5 == 0 ? "Да" : "Нет") << endl;
    cout << "Делится на 3 и 5: " << (n % 3 == 0 && n % 5 == 0 ? "Да" : "Нет") << endl;
}
int main() {
    int number;
    cout << "Введите число: ";
    cin >> number;
    proverka(number);
    return 0;
}