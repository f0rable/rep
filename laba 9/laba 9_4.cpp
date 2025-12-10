#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr));

    stroka big = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    stroka small = "abcdefghijklmnopqrstuvwxyz";
    stroka number = "0123456789";
    stroka special = "!@#$%^&*";

    stroka passwd = big + small + number + special;

    const int dlina = 12;
    stroka pass;

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
            if (big.find(c) != stroka::npos)
                isBig = true;
            if (small.find(c) != stroka::npos)
                isSmall = true;
            if (number.find(c) != stroka::npos)
                isNumber = true;
            if (special.find(c) != stroka::npos)
                isSpecial = true;
        }

        if (isBig && isSmall && isNumber && isSpecial)
            norm = true;
    }

    cout << "Готовый пароль: " << pass << endl;

    return 0;
}
