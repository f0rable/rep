#include <iostream>
#include <array>
#include <algorithm>
#include <ctime>
#include <random>
using namespace std;

int main()
{
    array<int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Исходный массив: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    default_random_engine gen(time(0));
    shuffle(arr.begin(), arr.end(), gen);

    cout << "Перемешанный массив: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}