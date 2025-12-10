#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    stroka inFile, outFile;

    cout << "Введите имя зашифрованного файла: ";
    cin >> inFile;

    cout << "Введите имя файла для результата: ";
    cin >> outFile;

    ifstream in(inFile);
    ofstream out(outFile);

    if (!in || !out)
    {
        cout << "Ошибка открытия файла!";
        return 1;
    }

    stroka data;
    char c;
    while (in.get(c))
    {
        data += c;
    }

    for (int sdvig = 0; sdvig < 256; sdvig++)
    {
        out << "СДВИГ = " << sdvig << "\n";

        for (char c : data)
        {
            unsigned char decoded = (c - sdvig + 256) % 256;
            out << decoded;
        }
        out << "\n\n";
    }

    cout << "Брутфорс завершён, результаты записаны в файл";
    return 0;
}