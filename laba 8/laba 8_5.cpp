#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Введите количество записей: ";
    cin >> n;

    vector<int> buses(n);
    cout << "Введите номера автобусов: ";
    for (int i = 0; i < n; i++)
    {
        cin >> buses[i];
    }

    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        bool exists = false;
        for (int j = 0; j < result.size(); j++)
        {
            if (result[j] == buses[i])
            {
                exists = true;
                break;
            }
        }

        if (!exists)
        {
            result.push_back(buses[i]);
        }
    }

    cout << "Список без повторений: " << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}