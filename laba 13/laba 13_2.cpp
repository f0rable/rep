#include <iostream>
#include <string>
using namespace std;

using Integer = int;
using Rational = float;
using Symbol = char;

enum class Type
{
    INT,
    FLOAT,
    CHAR,
    NONE
};

union UniversalValue
{
    Integer intValue;
    Rational floatValue;
    Symbol charValue;
};

struct Data
{
    UniversalValue value;
    Type currentType;

    Data() : currentType(Type::NONE) {}
};

void showMenu()
{
    cout << "\nВыберите действие:" << endl;
    cout << "1. Ввести int" << endl;
    cout << "2. Ввести float" << endl;
    cout << "3. Ввести char" << endl;
    cout << "4. Показать текущее значение" << endl;
    cout << "5. Выход" << endl;
    cout << "\n> ";
}

void showCurrentValue(const Data &data)
{
    if (data.currentType == Type::NONE)
    {
        cout << "\nЗначение еще не задано!" << endl;
        return;
    }

    cout << "\nТекущее значение ";

    switch (data.currentType)
    {
    case Type::INT:
        cout << "(int): " << data.value.intValue << endl;
        break;
    case Type::FLOAT:
        cout << "(float): " << data.value.floatValue << endl;
        break;
    case Type::CHAR:
        cout << "(char): " << data.value.charValue << endl;
        break;
    default:
        break;
    }
}

int main()
{
    Data data;
    int choice;

    while (true)
    {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Введите int: ";
            Integer temp;
            cin >> temp;
            data.value.intValue = temp;
            data.currentType = Type::INT;
            break;
        }
        case 2:
        {
            cout << "Введите float: ";
            Rational temp;
            cin >> temp;
            data.value.floatValue = temp;
            data.currentType = Type::FLOAT;
            break;
        }
        case 3:
        {
            cout << "Введите char: ";
            Symbol temp;
            cin >> temp;
            data.value.charValue = temp;
            data.currentType = Type::CHAR;
            break;
        }
        case 4:
            showCurrentValue(data);
            break;
        case 5:
            cout << "\nВыход." << endl;
            return 0;
        default:
            cout << "\nНеверный выбор! Попробуйте снова." << endl;
            break;
        }
    }

    return 0;
}