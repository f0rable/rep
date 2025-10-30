#include <iostream>
using namespace std;
int main() {
    const double PI = 3.14;
    double diametr_cm;
    double distance_km;
    cout << "Введите диаметр колеса (см): ";
    cin >> diametr_cm;
    cout << "Введите длину пути (км): ";
    cin >> distance_km;
    double distance_cm = distance_km * 100000.0; // 1км=100000см
    double dokr = PI * diametr_cm;
    double oborot = distance_cm / dokr;
    cout << "Колесо сделает примерно " << oborot << " оборотов";
    return 0;
}