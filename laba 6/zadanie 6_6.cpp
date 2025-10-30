#include <iostream>
using namespace std;
int main() {
    int stroka;
    cout << "Введите количество строк: ";
    cin >> stroka;
    for (int i = 1; i <= stroka; i++) {
        for (int j = 1; j <= stroka - i; j++) {
            cout << ".";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}