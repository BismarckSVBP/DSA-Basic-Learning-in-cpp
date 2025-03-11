#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of lines : ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j <= i)
            {
                cout << char(64 + j);
            }
            else
            {
                int p = j - i;
                cout << char(64 + i - p);
            }
        }
        cout << endl;
    }

    return 0;
}
