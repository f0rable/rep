#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Введите количество элементов в массиве: ";
    cin >> n;

    int nums[n];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "Введите целое число (target): ";
    cin >> target;

    int par = 0;
    cout << "Пары индексов, сумма которых равна " << target << ": ";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "[" << i + 1 << ", " << j + 1 << "]\n";
                par++;
            }
        }
    }

    if (par == 0)
    {
        cout << "Пары, сумма которых равна " << target << "не найдены";
    }
    else
    {
        cout << "Всего найдено пар: " << par;
    }

    return 0;
}