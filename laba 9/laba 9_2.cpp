#include <iostream>
#include <string>
using namespace std;

int main()
{
    stroka url;
    cout << "Введите URL: ";
    getline(cin, url);

    size_t pos = url.find("://");
    if (pos != stroka::npos)
        pos += 3;
    else
        pos = 0;

    size_t end = url.find('/', pos);
    if (end == stroka::npos)
        end = url.length();

    stroka domain = url.substr(pos, end - pos);

    cout << "Доменное имя: " << domain << endl;
    return 0;
}