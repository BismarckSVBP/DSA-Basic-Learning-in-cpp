// //by me
// #include <iostream>
// using namespace std;
// void print(int arr[], int n)
// {
//     if (n == 0)
//     {
//         cout << n << "th index element is :" << arr[0] << endl;
//         return;
//     }
//     print(arr, n - 1);
//     cout << n << "th index element is :" << arr[n] << endl;
//     return;
// }

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     print(arr, 4);

//     return 0;
// }

// by master
// #include <iostream>
// using namespace std;
// void print(int arr[], int n, int i)
// {
//     //base case 
//     if (i >= n)
//     {
//         return;
//     }
//     //1 element solve karo 
//     cout << i << "th index element is :" << arr[i] << endl;
//     //aur recursion sambal lega
//     print(arr, n, i + 1);
//     return;
// }

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int i = 0;
//     print(arr, 5, i);

//     return 0;
// }


//by master-2
#include <iostream>
using namespace std;
void print(int arr[], int n,int i)
{
    //base case 
    if (n == 0)
    {
        return;
    }
    //1 element solve karo 
    cout  << i << "th index element is :" << arr[0] << endl;
    //aur recursion sambal lega
    print(arr+1, n-1,i+1);
    return;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i =0;
    print(arr, 5,i);

    return 0;
}
