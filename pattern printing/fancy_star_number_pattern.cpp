#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of lines : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << i;
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {

        for (int j = 2*n+1-2*i; j >=1; j--)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << n+1-i;
            }
        }
        cout << endl;
    }

    return 0;
}