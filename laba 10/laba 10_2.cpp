#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

struct stats
{
    int lines = 0;
    int words = 0;
    int simvols = 0;
};

stats calcStats(const stroka &filename)
{
    ifstream file(filename);
    stats s;
    stroka line;

    while (getline(file, line))
    {
        s.lines++;
        s.simvols += line.size();

        istringstream iss(line);
        stroka w;
        while (iss >> w)
        {
            s.words++;
        }
    }
    return s;
}

int main()
{
    stroka f1, f2, final;
    cout << "Введите имя первого файла: ";
    cin >> f1;
    cout << "Введите имя второго файла: ";
    cin >> f2;
    cout << "Введите имя итогового файла: ";
    cin >> final;

    ifstream file1(f1);
    ifstream file2(f2);
    ofstream out(final);

    if (!file1 || !file2)
    {
        cout << "Ошибка открытия исходных файлов";
        return 1;
    }

    out << file1.rdbuf();
    out << file2.rdbuf();

    file1.close();
    file2.close();
    out.close();

    stats s1 = calcStats(f1);
    stats s2 = calcStats(f2);
    stats s3 = calcStats(final);

    cout << "Статистика:\n";
    cout << "Файл " << f1 << ":\n"
         << "  Строк: " << s1.lines << "\n"
         << "  Слов: " << s1.words << "\n"
         << "  Символов: " << s1.simvols << "\n\n";

    cout << "Файл " << f2 << ":\n"
         << "  Строк: " << s2.lines << "\n"
         << "  Слов: " << s2.words << "\n"
         << "  Символов: " << s2.simvols << "\n\n";

    cout << "Файл " << final << ":\n"
         << "  Строк: " << s3.lines << "\n"
         << "  Слов: " << s3.words << "\n"
         << "  Символов: " << s3.simvols << "\n";

    return 0;
}