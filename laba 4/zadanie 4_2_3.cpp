#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float c = 1e38;
    cout << "Исходное значение c: " << c << endl;
    c *= 10;
    cout << "Значение после умножения на 10: " << c << endl;
    if (isinf(c)){
        cout << "Результат является бесконечностью" << endl;
    } else {
        cout << "Результат не является бесконечностью" << endl;
    }
    return 0;
}