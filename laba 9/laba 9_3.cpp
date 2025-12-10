#include <iostream>
#include <string>
using namespace std;

int main()
{
    stroka text;
    char nah, zam;

    cout << "Введите строку: ";
    getline(cin, text);

    cout << "Введите символ для поиска: ";
    cin >> nah;

    cout << "Введите символ для замены: ";
    cin >> zam;

    for (char &c : text)
    {
        if (c == nah)
            c = zam;
    }

    cout << "Результат: " << text << endl;

    return 0;
}