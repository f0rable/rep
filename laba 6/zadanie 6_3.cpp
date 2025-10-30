#include <iostream>
using namespace std;
int main() {
    int num;
    bool proverka = true;
    cout << "Введите число: ";
    cin >> num;
    if (num < 1) {
        proverka = false;
    }
    else if (num == 1) {
        cout << num << " является ни простым, ни составным числом" << endl;
        return 0;
    }
    else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                proverka = false;
                break;
            }
        }
    }
    if (proverka) {
        cout << num << " является простым числом" << endl;
    }
    else {
        cout << num << " является составным числом" << endl;
    }
    return 0;
}