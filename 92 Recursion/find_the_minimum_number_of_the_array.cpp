// //by using pointer and returning a pointer 
// #include <iostream>
// #include <limits.h>
// using namespace std;
// int* findingminimum(int arr[], int n, int *min)
// {

//     if (n == 0)
//     {
//         if (arr[0] < *min)
//         {
//             *min = arr[0];
//         }

//         return min;
//     }

//     findingminimum(arr, n - 1, min);
//     if (arr[n] < *min)
//     {
//         *min = arr[n];
//     }

//     return min;
// }

// int main()
// {
//     int arr[5] = {40, 50, 60, 70, 5};
//     int min = INT_MAX;
//     int *minimum = findingminimum(arr, 4, &min);
//     cout << *minimum << endl;
//     return 0;
// }


//by using pointer and returning a integer value
#include <iostream>
#include <limits.h>
using namespace std;
int findingminimum(int arr[], int n, int *min)
{

    if (n == 0)
    {
        if (arr[0] < *min)
        {
            *min = arr[0];
        }

        return *min;
    }

    findingminimum(arr, n - 1, min);
    if (arr[n] < *min)
    {
        *min = arr[n];
    }

    return *min;
}

int main()
{
    int arr[5] = {40, 50, 60, 70, 5};
    int min = INT_MAX;
    int minimum = findingminimum(arr, 4, &min);
    cout << minimum << endl;
    return 0;
}
