#include <iostream>
using namespace std;

int main()
{
    const int n = 3;
    int a[n] = {0, 0, 0};

    cout << "[" << a[0] << " " << a[1] << " " << a[2] << "]" << endl;

    for (int i = 1; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] == 0)
            {
                a[j] = 1;
                break;
            }
            else
            {
                a[j] = 0;
            }
        }

        cout << "[" << a[0] << " " << a[1] << " " << a[2] << "]" << endl;
    }

    return 0;
}