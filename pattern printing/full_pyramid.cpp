#include <iostream>
using namespace std;

int main()
{

    cout << "Enter a number : ";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // for (int j = 1; j <= 2 * i - 1; j++)
        // {
            // if (j % 2 == 0)
            // {
            //     cout << " ";
            // }
            // else
            // {
            //     cout << "*";
            // }
        // }


        //optimised code

        for (int j = 1; j <= i; j++)
        {
            
             cout << "* ";
        }
        cout << endl;
    }

    
}
