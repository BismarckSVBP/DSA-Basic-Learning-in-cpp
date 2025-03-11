#include <iostream>
#include <vector>
using namespace std;
int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // store ans
            ans = mid;
            // check further
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {

            start = mid + 1;
        }
        else
        {

            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}
int binarySearch2(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // store ans
            ans = mid;
            // check further
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {

            start = mid + 1;
        }
        else
        {

            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}
int main()
{
    int arr[] = {2, 4, 4, 4, 4, 4, 4, 9};
    int size = 8;
    int target = 4;
    int firstOcc = binarySearch(arr, size, target);
    int lastOcc = binarySearch2(arr, size, target);
    if (firstOcc == -1)
    {
        cout << "No target is not present in the array.";
    }
    else
    {
        cout << "Yes target is present in the array & total no. of occurances are " << lastOcc - firstOcc + 1 << ".";
    }

    return 0;
}

// // by using pre-defined  function
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int arr[] = {2, 3, 4, 4, 4, 4, 8, 9};
//     int size = 8;
//     int target = 4;
//     auto ans2 = lower_bound(arr, arr + 8, target);

//     cout << "Yes target is present in the array & it's first occurances index is " << ans2-arr << ".";

//     return 0;
// }
