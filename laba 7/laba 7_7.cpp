#include <iostream>
using namespace std;

int main()
{
    const int stroka = 2, stolbec = 2;
    int a[stroka][stolbec] = {{0, 0}, {0, 0}};

    cout << "[" << a[0][0] << " " << a[0][1] << "]" << " [" << a[1][0] << " " << a[1][1] << "]" << endl;

    for (int i = 1; i < (1 << (stroka * stolbec)); i++)
    {
        for (int j = 0; j < stroka * stolbec; j++)
        {
            int sr = j / stolbec;
            int sc = j % stolbec;

            if (a[sr][sc] == 0)
            {
                a[sr][sc] = 1;
                break;
            }
            else
            {
                a[sr][sc] = 0;
            }
        }

        cout << "[" << a[0][0] << " " << a[0][1] << "]" << " [" << a[1][0] << " " << a[1][1] << "]" << endl;
    }

    return 0;
}