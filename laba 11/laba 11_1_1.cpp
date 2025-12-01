#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i * 10;
    }

    cout << "Адрес начала массива: " << arr << endl;

    cout << "\nАдреса всех элементов:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << ", адрес: " << &arr[i] << endl;
    }

    cout << "\nРазница между адресами соседних элементов:" << endl;
    for (int i = 0; i < 9; i++)
    {
        long long diff = (long long)&arr[i + 1] - (long long)&arr[i];
        cout << "arr[" << i + 1 << "] - arr[" << i << "] = " << diff << " байт" << endl;
    }

    cout << "\nРазница всегда равна " << sizeof(int) << " байт" << endl;

    delete[] arr;

    return 0;
}