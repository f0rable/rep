#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5);

    cout << "Введите 5 чисел: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    v.erase(v.begin() + v.size() / 2);

    int last = v.back();
    v.push_back(last * last);

    cout << "Результат: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}