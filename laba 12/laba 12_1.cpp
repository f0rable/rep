#include <iostream>
#include <string>

using namespace std;

int RimToInt(char rim)
{
    switch (rim)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
}

int RimToInt(const string &rimStr)
{
    int result = 0;

    for (int i = 0; i < rimStr.length(); i++)
    {
        int current = RimToInt(rimStr[i]);

        if (i + 1 < rimStr.length() && RimToInt(rimStr[i + 1]) > current)
        {
            result -= current; // 4,9
        }
        else
        {
            result += current; // остальные
        }
    }

    return result;
}

bool SymbolsProverka(const string &str)
{
    for (char r : str)
    {
        if (r != 'I' && r != 'V' && r != 'X' && r != 'L' &&
            r != 'C' && r != 'D' && r != 'M')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string rimNum;

    cout << "Введите римское число: ";
    cin >> rimNum;

    if (rimNum.length() < 1 || rimNum.length() > 15)
    {
        cout << "Длина числа должна быть от 1 до 15 символов" << endl;
        return 1;
    }

    if (!SymbolsProverka(rimNum))
    {
        cout << "Число содержит недопустимые символы" << endl;
        return 1;
    }

    int number = RimToInt(rimNum);

    if (number < 1 || number > 3999)
    {
        cout << "Число должно быть в диапазоне от 1 до 3999" << endl;
        return 1;
    }

    cout << "Результат: " << number << endl;

    return 0;
}