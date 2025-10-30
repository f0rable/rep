#include <iostream>
using namespace std;
int main() {
    double mashaBalance = 100.0;
    double katyaBalance = 100.0;
    const double mashaP = 0.10;
    const double katyaP = 0.05;
    const double invest = 100.0;
    int year = 0;
    cout << year << "\t" << mashaBalance << "\t" << katyaBalance << endl;
    while (katyaBalance <= mashaBalance) {
        year++;
        mashaBalance = invest + (mashaP * invest * year);
        katyaBalance = katyaBalance * (1 + katyaP);
        cout << year << "\t" << mashaBalance << "\t" << katyaBalance << endl;
    }
    cout << "Баланс Кати превысил баланс Маши через " << year << " лет" << endl;
    cout << "Маша: " << mashaBalance << " рублей" << endl;
    cout << "Катя: " << katyaBalance << " рублей" << endl;
    return 0;
}