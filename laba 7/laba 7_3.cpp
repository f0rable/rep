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

    int maxP = 0;
    int mostP = a[0];
    for (int i = 0; i < n; i++)
    {
        int p = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == a[i])
            {
                p++;
            }
        }
        if (p > maxP)
        {
            maxP = p;
            mostP = a[i];
        }
    }

    cout << "Самое частое значение: " << mostP;

    return 0;
}