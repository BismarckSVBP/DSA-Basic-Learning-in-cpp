// method-1

// // #include <iostream>
// // #include <vector>
// // #include <limits.h>
// // using namespace std;

// // int counting(vector<int> &arr, int size, int target)
// // {
// //     if (target == 0)//agar humara target zero hai toh hum use zero parkaar se bana sakte hai
// //     {
// //         return 0;
// //     }
// //     if (target < 0) //agar humara target negative hai toh hum use nahi bana sakte hai matlab mini ki jo value use update nahi karna
// //     {

// //         return INT16_MAX;
// //     }
// //     int mini = INT16_MAX;
// //     for (int i = 0; i < size; i++)
// //     {
// //         int ans = counting(arr, size, target - arr[i]);
// //         if (ans != INT16_MAX)
// //             mini = min(mini, ans+1 );
// //             cout <<"ith index " << i <<"  target" << target - arr[i] <<" " << mini << endl;
// //     }
// //     return mini;
// // }
// // int main()
// // {
// //     vector<int> arr{1, 2}; // Array of integers
// //     int target = 3;
// //     int size = arr.size();

// //     int ans = counting(arr, size, target);
// //     cout << ans << endl;
// //     return 0;
// // }




////methode-1 with small change
// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;

// int counting(vector<int> &arr, int mini, int target)
// {
//     if (target == 0) // agar humara target zero hai toh hum use zero parkaar se bana sakte hai
//     {
//         return 0;
//     }
//     if (target < 0) // agar humara target negative hai toh hum use nahi bana sakte hai matlab mini ki jo value use update nahi karna hume
//     {

//         return INT16_MAX;
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         int ans = counting(arr, mini, target - arr[i]);

//         if (ans != INT16_MAX)
//             mini = min(mini, ans + 1);
//         cout << "target" << target - arr[i] <<" " << mini << endl;
//     }
//     return mini;
// }
// int main()
// {
//     vector<int> arr{1, 2}; // Array of integers
//     int target = 3;
//     int mini = INT16_MAX;

//     int ans = counting(arr, mini, target);
//     cout << ans << endl;
//     cout << mini << endl;

//     return 0;
// }

// methoe-2
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int counting(vector<int> &arr, int output, int target)
{
    if (output == target) // agar humara target zero hai toh hum use zero parkaar se bana sakte hai
    {
        return 0;
    }
    if (output > target) // agar humara target negative hai toh hum use nahi bana sakte hai matlab output ki jo value use update nahi karna hume
    {

        return INT_MAX;
    }
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = counting(arr, output + arr[i], target);

        if (ans != INT_MAX)
            mini = min(mini, ans + 1);
    }
    return mini;
}
int main()
{
    vector<int> arr{1, 2, 3}; // Array of integers
    int target = 9;
    int output = 0;

    int ans = counting(arr, output, target);
    cout << ans << endl;

    return 0;
}