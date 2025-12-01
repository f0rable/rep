#include <iostream>
using namespace std;

int main()
{
    int **matrix = new int *[3];
    for (int i = 0; i < 3; i++)
    {
        matrix[i] = new int[3];
    }

    int value = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = value++;
        }
    }

    cout << "Массив 3x3:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nАдреса всех элементов:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "matrix[" << i << "][" << j << "] = " << matrix[i][j] << ", адрес: " << &matrix[i][j] << endl;
        }
    }

    cout << "\nПроверка последовательности:" << endl;
    cout << "Адрес matrix[0]: " << matrix[0] << endl;
    cout << "Адрес matrix[1]: " << matrix[1] << endl;
    cout << "Адрес matrix[2]: " << matrix[2] << endl;

    for (int i = 0; i < 3; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}