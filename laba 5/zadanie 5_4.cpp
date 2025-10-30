#include <iostream>
using namespace std;
int main() {
    double m, l, bmi;
    cout << "Введите вес в килограммах: ";
    cin >> m;
    cout << "Введите рост в метрах: ";
    cin >> l;
    bmi = m / (l * l);
    cout << "Ваш индекс массы тела (BMI): " << bmi << endl;
    if (bmi < 18.5) {
        cout << "Категория: Недостаточный вес" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Категория: Нормальный вес" << endl;
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        cout << "Категория: Избыточный вес" << endl;
    } else {
        cout << "Категория: Ожирение" << endl;
    }
    return 0;
}