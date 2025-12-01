#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Введите размер массива: ";
    cin >> n;

    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int;
        cout << "Введите значение для элемента " << i << ": ";
        cin >> *arr[i];
    }

    cout << "\nЗначения всех элементов массива через указатели:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] указывает на значение: " << *arr[i] << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete arr[i];
    }
    delete[] arr;

    return 0;
}