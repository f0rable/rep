#include <iostream>
using namespace std;
double translate(double c) {
    return 1.8 * c + 32;
}
int main() {
    double c;
    cout << "Введите температуру в градусах Цельсия: ";
    cin >> c;
    double f = translate(c);
    cout << c << " градусов Цельсия = " << f << " градусов Фаренгейта" << endl;
    return 0;
}