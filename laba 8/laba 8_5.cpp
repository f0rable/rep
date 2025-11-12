#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Введите количество записей: ";
    cin >> n;

    vector<int> bus(n);
    cout << "Введите номера автобусов: ";
    for (int i = 0; i < n; i++)
    {
        cin >> bus[i];
    }

    vector<int> unik;

    for (int i = 0; i < n; i++)
    {
        bool videl = false;
        for (int j = 0; j < unik.size(); j++)
        {
            if (unik[j] == bus[i])
            {
                videl = true;
                break;
            }
        }

        if (!videl)
        {
            unik.push_back(bus[i]);
        }
    }

    cout << "Список без повторений: " << endl;
    for (int i = 0; i < unik.size(); i++)
    {
        cout << unik[i] << " ";
    }
    cout << endl;

    return 0;
}