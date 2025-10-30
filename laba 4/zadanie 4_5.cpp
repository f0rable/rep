#include <iostream>
using namespace std;
int main() {
    double d, s;
    double diagonal;
    cout << "Введите длину фундамента (в метрах): ";
    cin >> d;
    cout << "Введите ширину фундамента (в метрах): ";
    cin >> s;
    diagonal = sqrt(d * d + s * s);
    cout << "Длина диагонали фундамента: " << diagonal << " м" << std::endl;
    return 0;
}