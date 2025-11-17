#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr));

    string big = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string small = "abcdefghijklmnopqrstuvwxyz";
    string number = "0123456789";
    string special = "!@#$%^&*";

    string passwd = big + small + number + special;

    const int dlina = 12;
    string pass;

    bool norm = false;

    while (!norm)
    {
        pass = "";

        for (int i = 0; i < dlina; i++)
        {
            pass += passwd[rand() % passwd.size()];
        }

        cout << "Попытка: " << pass << endl;

        bool isBig = false;
        bool isSmall = false;
        bool isNumber = false;
        bool isSpecial = false;

        for (char c : pass)
        {
            if (big.find(c) != string::npos)
                isBig = true;
            if (small.find(c) != string::npos)
                isSmall = true;
            if (number.find(c) != string::npos)
                isNumber = true;
            if (special.find(c) != string::npos)
                isSpecial = true;
        }

        if (isBig && isSmall && isNumber && isSpecial)
            norm = true;
    }

    cout << "Готовый пароль: " << pass << endl;

    return 0;
}
