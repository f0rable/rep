#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Введите количество элементов массива (m): ";
    cin >> m;
    cout << "Введите количество элементов массива (n): ";
    cin >> n;

    if (m <= n)
    {
        cout << "Ошибка: m должно быть больше n!" << endl;
        return 0;
    }

    int a[m], b[n];
    cout << "Введите элементы первого массива:" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    cout << "Введите элементы второго массива:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    bool naiden = false;
    int startI = 0;
    for (int i = 0; i <= m - n; i++)
    {
        bool sovp = true;
        for (int j = 0; j < n; j++)
        {
            if (a[i + j] != b[j])
            {
                sovp = false;
                break;
            }
        }
        if (sovp)
        {
            naiden = true;
            startI = i;
            break;
        }
    }

    if (naiden)
    {
        cout << "Второй массив является частью первого и начинается с позиции: "
             << startI + 1 << endl;
    }
    else
    {
        cout << "Второй массив НЕ является частью первого." << endl;
    }

    return 0;
}