#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int *ptr;

    for (int i = 0; i < 5; i++)
    {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nВывод элементов массива:" << endl;
    ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "] = " << *(ptr + i) << endl;
    }

    ptr = &arr[1];

    cout << "\nИзменение каждого второго элемента (увеличение на 2):" << endl;
    for (int i = 1; i < 5; i += 2)
    {
        arr[i] += 2;
    }

    cout << "\nИтоговый массив:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}