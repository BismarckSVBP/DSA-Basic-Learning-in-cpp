#include <iostream>
using namespace std;

int main()
{

    cout << "Enter a number : ";
    int n, p, j, i, k, m;
    cin >> n;
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (k = i; k <= 2*i-1; k++)
    //     {

    //         cout << k;

    //     }

    //     for (m = 2*i-2; m >=i; m--)
    //     {

    //         cout << m;

    //     }
    //     cout << endl;
    // }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        p = i;
        for (k = 1; k <= 2 * i - 1; k++)
        {
            if (k <= i)
            {

                cout << p;
                p++;
            }
            else
            {
                p--;
                cout << p - 1;
            }
        }

        cout << endl;
    }
}
