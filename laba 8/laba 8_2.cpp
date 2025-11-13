#include <iostream>
#include <array>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    array<int, 5> arr;

    cout << "Исходный массив: ";
    for (int i = 0; i < 5; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;

    rotate(arr.begin(), arr.end() - 1, arr.end());

    cout << "После сдвига: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}