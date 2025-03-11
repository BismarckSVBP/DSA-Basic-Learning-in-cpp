// // //method-1 by master

// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;

// int counting(vector<int> &arr, int output, int target)
// {
//     if (output == target)
//     {
//         return 0;
//     }
//     if (output > target)
//     {

//         return INT_MIN;
//     }
//     int maxi = INT_MIN;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int ans = counting(arr, output + arr[i], target);

//         if (ans != INT_MIN)
//             maxi = max(maxi, ans + 1);
//     }
//     return maxi;
// }
// int main()
// {
//     vector<int> arr{9, 2, 3}; // Array of integers
//     int target = 9;
//     int output = 0;

//     int ans = counting(arr, output, target);
//     cout << ans << endl;

//     return 0;
// }

// method-2 by master

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(int n, int x, int y, int z)
{
    if (n == 0)
    {
        return 0;
    }

    if (n < 0)
    {
        return INT_MIN;
    }

    int a = solve(n - x, x, y, z) + 1;

    int b = solve(n - y, x, y, z) + 1;

    int c = solve(n - z, x, y, z) + 1;

    int ans = max(a, max(b, c));
    cout << ans << " " <<endl;
    return ans;
}

int main()
{
    int n = 9;
    int x = 9;
    int y = 2;
    int z = 3;
    int maximum = solve(n, x, y, z);

    if (maximum < 0)
    {
        cout << "This case this not possible" << endl;
    }
    if (maximum >= 0)
    {
        cout << maximum << endl;
    }

    return 0;
}