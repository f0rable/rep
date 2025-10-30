#include <iostream>
#include <limits>
using namespace std;
int main() {
    short b = 32767;
    cout << "before: " << b << endl;
    b++;
    cout << "after: " << b << endl;
    cout << "Минимальное значение: " << numeric_limits<short>::min() << endl;
    cout << "Максимальное значение: " << numeric_limits<short>::max() << endl;
    return 0;
}