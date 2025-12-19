#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
};

struct Discipline
{
    string name;
    Student student;
};

struct Program
{
    string name;
    Discipline discipline;
};

struct Department
{
    string name;
    Program program;
};

struct School
{
    string name;
    Department department;
};

struct University
{
    string name;
    School school;
};

void printUniversityTree(const University &univ, const string &userName)
{
    cout << "Университет \"" << univ.name << "\"" << endl;
    cout << "└── Школа/Институт \"" << univ.school.name << "\"" << endl;
    cout << "    └── Департамент \"" << univ.school.department.name << "\"" << endl;
    cout << "        └── Программа \"" << univ.school.department.program.name << "\"" << endl;
    cout << "            └── Дисциплина \"" << univ.school.department.program.discipline.name << "\"" << endl;
    cout << "                └── Студент \"" << userName << "\"" << endl;
}

int main()
{
    string userName;
    cout << "Введите ваше имя: ";
    getline(cin, userName);

    University fefu;
    fefu.name = "Дальневосточный федеральный университет";
    fefu.school.name = "Институт математики и компьютерных технологий";
    fefu.school.department.name = "Департамент информационной безопасности";
    fefu.school.department.program.name = "Бакалавриат/Специалитет";
    fefu.school.department.program.discipline.name = "Языки программирования";
    fefu.school.department.program.discipline.student.name = userName;

    cout << "\nДерево университета\n"
         << endl;
    printUniversityTree(fefu, userName);

    return 0;
}