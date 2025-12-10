#include <iostream>
#include <string>
#include <vector>

using namespace std;

string IntToRim(int num)
{
    if (num < 1 || num > 3999)
    {
        return "Выход за диапазон";
    }

    vector<pair<int, string>> rimValue = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}};

    string rimStr = "";

    for (const auto &pair : rimValue)
    {
        int value = pair.first;
        const string &symbol = pair.second;

        while (num >= value)
        {
            rimStr += symbol;
            num -= value;
        }
    }

    return rimStr;
}

int main()
{
    int number;

    cout << "Введите целое число (от 1 до 3999): ";
    cin >> number;

    string rimNumber = IntToRim(number);
    cout << "Римская цифра: " << rimNumber << endl;

    return 0;
}