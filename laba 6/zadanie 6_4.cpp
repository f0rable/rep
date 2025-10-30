#include <iostream>
#include <ctime>
using namespace std;
int main() {
    clock_t start = clock();
    cout << "Факториалы чисел от 0 до 20:" << endl;
    for (int i = 0; i <= 20; i++) {
        long long factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        cout << i << "! = " << factorial << endl;
    }
    clock_t end = clock();
    double vremya = double(end - start) / CLOCKS_PER_SEC;
    cout << "Время выполнения: " << vremya * 1000.0 << " миллисекунд" << endl;
    return 0;
}