#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    stroka s;
    cout << "Введите строку: ";
    getline(cin, s);

    int kolvo = 0;
    bool slovo = false;

    for (char c : s)
    {
        if (isalnum(c))
        {
            if (!slovo)
            {
                kolvo++;
                slovo = true;
            }
        }
        else
        {
            slovo = false;
        }
    }

    cout << "Количество слов: " << kolvo << endl;
    return 0;
}
