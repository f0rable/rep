#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int x, y;

    cout << "Введите первое число: ";
    cin >> x;
    cout << "Введите второе число: ";
    cin >> y;

    cout << "\nДо обмена:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    swap(&x, &y);

    cout << "\nПосле обмена:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}