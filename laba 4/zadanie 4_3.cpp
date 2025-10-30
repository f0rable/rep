#include <iostream>
using namespace std;
int main() {
    double d, s, v;
    cout << "Введите длину комнаты (м): ";
    cin >> d;
    cout << "Введите ширину комнаты (м): ";
    cin >> s;
    cout << "Введите высоту комнаты (м): ";
    cin >> v;
    double potolok = d * s;
    double sd = 2 * d * v;
    double ss = 2 * s * v;
    double stena = sd + ss;
    cout << "Площадь потолка: " << potolok << " м²" << endl;
    cout << "Площадь стен: " << stena << " м²" << endl;
    cout << "Общая площадь для покраски (стены + потолок): " << (potolok + stena) << " м²" << endl;
    return 0;
}