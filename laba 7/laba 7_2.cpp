#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Введите количество элементов массива: ";
    cin >> n;

    int a[n];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int minI = 0, maxI = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[minI])
            minI = i;
        if (a[i] > a[maxI])
            maxI = i;
    }

    int smena = a[minI];
    a[minI] = a[maxI];
    a[maxI] = smena;

    cout << "Массив после перестановки: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}