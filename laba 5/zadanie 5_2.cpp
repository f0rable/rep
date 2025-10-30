#include <iostream>
using namespace std;
bool proverka(int day, int month) {
    int dmonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month < 1 || month > 12) {
        return false;
    }
    if (day < 1 || day > dmonth[month - 1]) {
        return false;
    }
    return true;
}
int main() {
    int day, month;
    cout << "Введите день: ";
    cin >> day;
    cout << "Введите месяц: ";
    cin >> month;
    if (proverka(day, month)) {
        cout << "Дата корректна" << endl;
    } else {
        cout << "Дата некорректна" << endl;
    }
    return 0;
}