
#include <iostream>
using namespace std;
bool print(int arr[], int size, bool &i)
{
    if (size == 0)
    {
        i = 1;
        return i;
    }
    if (arr[size] >= arr[size - 1])
    {
        print(arr, size - 1, i);
    }

    return i;
}

int main()
{
    int arr[] = {4,3,1,2,4,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool i = 0;
    int indexOfTarget = print(arr, size - 1, i);
    if (indexOfTarget == 1)
    {
        cout << "Sorted In Asending Order" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }

    return 0;
}

// // //by master
// #include <iostream>
// #include <vector>

// using namespace std;
// bool print(vector<int> &arr, int &size, int i)
// {
//     if (i == size - 1)
//     {

//         return true;
//     }
//     if (arr[i + 1] < arr[i])
//     {
//         return false;
//     }

//     return print(arr, size, i + 1);
//     ;
// }

// int main()
// {
//     vector<int> arr{10, 20, 30, 40, 50};

//     int size = arr.size();
//     int i = 1;
//     int indexOfTarget = print(arr, size, i);
//     if (indexOfTarget == 1)
//     {
//         cout << "Sorted In Asending Order" << endl;
//     }
//     else
//     {
//         cout << "Not Sorted" << endl;
//     }

//     return 0;
// }
