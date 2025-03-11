#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of column : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i + 1; j++)
        {
            if (j == 1 || i == 1 || j == n - i + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}