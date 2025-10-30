#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Введите трёхзначное число: ";
    cin >> number;
    cout << "Цифры числа: ";
    cout << (number / 100) << ", ";
    cout << ((number / 10) % 10) << ", ";
    cout << (number % 10) << endl;
    return 0;
}