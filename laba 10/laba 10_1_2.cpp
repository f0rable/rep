#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ifstream file("vector.txt");
    if (!file)
    {
        cout << "Ошибка открытия файла!";
        return 1;
    }

    string line1, line2;
    getline(file, line1);
    getline(file, line2);

    vector<int> v1, v2;
    int x;

    istringstream s1(line1);
    while (s1 >> x)
        v1.push_back(x);

    istringstream s2(line2);
    while (s2 >> x)
        v2.push_back(x);

    cout << "Первый вектор: ";
    for (int a : v1)
        cout << a << " ";
    cout << "\nВторой вектор: ";
    for (int a : v2)
        cout << a << " ";
    cout << endl;

    return 0;
}