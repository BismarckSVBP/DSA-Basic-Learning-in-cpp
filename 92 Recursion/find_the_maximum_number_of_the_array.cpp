// //by using reference operator
// #include <iostream>
// #include <limits.h>
// using namespace std;
// int &findingminimum(int arr[], int n, int &max)
// {

//     if (n == 0)
//     {
//         if (arr[0] > max)
//         {
//             max = arr[0];
//         }

//         return max;
//     }

//     findingminimum(arr, n - 1, max);
//     if (arr[n] > max)
//     {
//         max = arr[n];
//     }

//     return max;
// }

// int main()
// {
//     int arr[5] = {40, 50, 60, 70, 5};
//     int max = INT_MIN;
//     int maximum = findingminimum(arr, 4, max);
//     cout << maximum << endl;
//     cout << max << endl;
//     return 0;
// }

// by master
// by using reference operator
#include <iostream>
#include <limits.h>
using namespace std;
int &findingminimum(int arr[], int n, int &max, int i)
{

    if (i >= n)
    {
        if (arr[0] > max)
        {
            max = arr[0];
        }

        return max;
    }
    if (arr[n] > max)
    {
        max = arr[n];
    }
    findingminimum(arr, n - 1, max, i + 1);

    return max;
}

int main()
{
    int arr[5] = {40, 50, 60, 70, 5};
    int max = INT_MIN;
    int i = 0;
    int maximum = findingminimum(arr, 4, max, i);
    cout << maximum << endl;
    cout << max << endl;
    return 0;
}
