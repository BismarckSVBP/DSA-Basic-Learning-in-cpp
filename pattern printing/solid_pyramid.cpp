

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Enter a number : ";
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {

//             for (int j = 1; j <= n - i; j++)
//             {
//                 cout << " ";
//             }
//             for (int j = 1; j <= 2 * i - 1; j++)
//             {
//                 cout << "*";
//             }
//             cout << endl;

//     }
//     for (int i = 1; i <= n - 1; i++)
//     {

//             for (int j = 1; j <= i; j++)
//             {
//                 cout << " ";
//             }
//             for (int j = 1; j <= 2 * n - 1 - (2 * i); j++)
//             {
//                 cout << "*";
//             }
//             cout << endl;
//         }

// }


///optimised code

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number : ";
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        if (i > n)
        {
            int p = i - n;
            for (int j = 1; j <= p; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= 2 * n - 1 - (2 * p); j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}