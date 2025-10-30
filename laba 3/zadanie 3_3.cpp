#include <iostream>
using namespace std;
double translate(double lightYear) {
    return lightYear * 63240.0;
}
int main() {
    double lightYear;
    cout << "Введите количество световых лет: ";
    cin >> lightYear;
    double astronom = translate(lightYear);
    cout << lightYear << " световых лет = " << astronom << " астрономических единиц." << endl;
    return 0;
}