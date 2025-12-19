#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int convert(char rim)
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

int convert(const string &rimStr)
{
    int result = 0;

    for (int i = 0; i < (int)rimStr.length(); i++)
    {
        int current = convert(rimStr[i]);

        if (i + 1 < (int)rimStr.length() && convert(rimStr[i + 1]) > current)
        {
            result -= current;
        }
        else
        {
            result += current;
        }
    }

    return result;
}

string convert(int num)
{
    if (num < 1 || num > 3999)
        return "";

    int vals[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string syms[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string res;

    for (int i = 0; i < 13; ++i)
    {
        while (num >= vals[i])
        {
            res += syms[i];
            num -= vals[i];
        }
    }

    return res;
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

bool isInteger(const string &str)
{
    if (str.empty())
        return false;

    for (char c : str)
    {
        if (!isdigit(c))
            return false;
    }
    return true;
}

int main()
{
    string input;
    cout << "Введите римское число или арабское число: ";
    cin >> input;

    if (isInteger(input))
    {
        int num = stoi(input);

        if (num < 1 || num > 3999)
        {
            cout << "Число должно быть в диапазоне от 1 до 3999\n";
            return 1;
        }

        string rim = convert(num);
        cout << "Римское представление: " << rim << endl;
    }
    else
    {
        if (!SymbolsProverka(input))
        {
            cout << "Ввод содержит недопустимые символы\n";
            return 1;
        }

        if (input.length() < 1 || input.length() > 15)
        {
            cout << "Длина римского числа должна быть от 1 до 15 символов\n";
            return 1;
        }

        int number = convert(input);

        if (number < 1 || number > 3999)
        {
            cout << "Результат должен быть в диапазоне от 1 до 3999\n";
            return 1;
        }

        cout << "Арабское представление: " << number << endl;
    }

    return 0;
}