#include <iostream>
using namespace std;
int main() {
    long long s;
    cout << "Введите количество секунд: ";
    cin >> s;
    long long days = s / 86400;
    long long hours = (s % 86400) / 3600;
    long long minutes = (s % 3600) / 60;
    long long secunds = s % 60;
    cout << s << " секунд = " << endl;
    cout << days << " дней, " << endl;
    cout << hours << " часов, " << endl;
    cout << minutes << " минут, " << endl;
    cout << secunds << " секунд" << endl;
    return 0;
}