
#include<bits/stdc++.h>
using namespace std;
// bool find(int arr[], int size, int key)
// {
//     int a = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             a = 1;
//         }
//         else
//         {
//             a = 0;
//         }
//     }
//     if (a == 1)
//         return 1;
//     else
//         return 0;
// }
bool find(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }

    return 0;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key;
    cout << "Enter your key :";
    cin >> key;
    if (find(arr, size, key))
    {
        cout << "Number is present in the array.";
    }
    else
    {
        cout << "Number is not present in the array.";
    }
    return 0;
}