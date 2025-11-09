#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    array<int, 5> arr = {15, 3, 42, 7, 23};

    cout << "Массив: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int minimum = *min_element(arr.begin(), arr.end());
    cout << "Минимум: " << minimum << endl;

    int maximum = *max_element(arr.begin(), arr.end());
    cout << "Максимум: " << maximum << endl;

    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << "Сумма: " << sum << endl;

    return 0;
}