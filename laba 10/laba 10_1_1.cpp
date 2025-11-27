#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    ifstream file("info.txt");
    if (!file)
    {
        cout << "Ошибка открытия файла!";
        return 1;
    }

    int n;
    file >> n;

    vector<int> v1(n), v2(n), v3(n);

    for (int i = 0; i < n; i++)
        file >> v1[i];
    for (int i = 0; i < n; i++)
        file >> v2[i];

    for (int i = 0; i < n; i++)
        v3[i] = v1[i] + v2[i];

    cout << "Результирующий вектор: ";
    for (int x : v3)
        cout << x << " ";
    cout << endl;

    return 0;
}