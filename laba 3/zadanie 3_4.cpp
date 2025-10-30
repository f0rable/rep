#include <iostream>
using namespace std;
void Vremya(int hours, int minutes) {
    cout << "Время : " << hours << ":" << minutes << endl;
}
int main() {
    int hours, minutes;
    cout << "Введите количество часов : ";
    cin >> hours;
    cout << "Введите количество минут : ";
    cin >> minutes;
    Vremya(hours, minutes);
    return 0;
}