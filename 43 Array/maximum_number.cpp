#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[10] = {9, 5, 7, 5, 3, 5, 9, 97, 4, 3};
    int size = 10;
    // int a = arr[0];
    int a = INT_MIN;
    for (int i = 1; i < size; i++)
    {
        if (a < arr[i])
        {
            a = arr[i];
        }
    }
    cout << "The max. number is :" << a << endl;

    return 0;
}