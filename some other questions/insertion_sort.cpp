

// // #include <iostream>
// // #include <vector>
// // using namespace std;
// // void insertion_sort(vector<int> &arr)
// // {
// //     int n = arr.size();
// //     for(int i=1;i<n;i++){
// //         int val = arr[i];
// //         int j = i-1;
// //         for(;j>=0;j--){
// //             if(arr[j]>val){
// //                 // swap(arr[j+1] , val);
// //                 arr[j+1] = val;
// //             }
// //             else{
// //                 break;
// //             }
// //         }
// //         arr[j+1] = val;
// //     }
// // }

// // int main()
// // {
// //     vector<int> arr{5,7,3,9,0,8,1};
// //     insertion_sort(arr);
// //     for( auto val : arr){
// //         cout << val << endl;
// //     }
// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// using namespace std;
// void insertion_sort(vector<int> &arr)
// {
//     int n = arr.size();
//     for (int i = 1; i < n; i++)
//     {
//         int val = arr[i];

//         for (int j = i - 1; j >= 0; j--)
//         {
//             if (arr[j] > val)
//             {
//                 arr[j + 1] = arr[j];
//                 arr[j] = val;
//             }
//         }
//     }
// }

// int main()
// {
//     vector<int> arr{5, 7, 3, 9, 0, 8, 1};
//     insertion_sort(arr);
//     for (auto val : arr)
//     {
//         cout << val << " ";
//     }
//     return 0;
// }

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int start = 0;
        int end = n;
        int
    }
};

class Solution
{
public:
    int firstBadVersion(int n)
    {   
        int start = 0;
        int end = n;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            int target = isBadVersion(mid);
            if (target == 1 && (mid == 0 || isBadVersion(mid - 1) != 1))
            {
                return mid;
            }
            else if (target == 0)
            {
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        return mid;
    }
};