#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char b;
    cout << "Введите одну букву: ";
    cin >> b;
    if (isupper(b)) {
        cout << "Буква в нижнем регистре: " << (char)tolower(b) << endl;
    } else if (islower(b)) {
        cout << "Буква в верхнем регистре: " << (char)toupper(b) << endl;
    } else {
        cout << "Это не буква!" << endl;
    }
    return 0;
}