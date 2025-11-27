#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string inFile, outFile;
    int sdvig;

    cout << "Введите имя исходного файла: ";
    cin >> inFile;

    cout << "Введите имя выходного файла: ";
    cin >> outFile;

    cout << "Введите сдвиг: ";
    cin >> sdvig;

    ifstream in(inFile);
    ofstream out(outFile);

    if (!in || !out)
    {
        cout << "Ошибка открытия файла!";
        return 1;
    }

    char c;
    while (in.get(c))
    {
        out.put((c + sdvig) % 256);
    }

    cout << "Файл зашифрован";
    return 0;
}