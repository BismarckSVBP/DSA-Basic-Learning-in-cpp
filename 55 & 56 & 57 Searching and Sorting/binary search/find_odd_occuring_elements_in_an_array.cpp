#include <iostream>
#include <vector>
using namespace std;
// int binarySearch(int arr[], int size)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = (start + end) / 2;
//     int ans = 0;
//     while (start <= end)
//     {
//         if (0 < mid && arr[mid] != arr[mid - 1])

//         // if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
//         {
//             ans = arr[mid];
//             return ans;
//         }
//                else if (end < size && arr[mid] != arr[mid + 1])

//         // if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
//         {
//             ans = arr[mid];
//             return ans;
//         }
//         else if ((mid % 2) != 0 && arr[mid] == arr[mid + 1])
//         {

//             end = mid - 2;
//         }
//         else if ((mid % 2) == 0 && arr[mid] == arr[mid + 1])
//         {

//             start = mid + 2;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }
int binarySearch(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = 0;
    while (start <= end)
    {
        if (start == end)
        {
            ans = mid+1;
            return ans;
        }

        else if ((mid % 2) == 0 )
        {
            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        else if ((mid % 2) != 0 )
        {
            if (arr[mid] == arr[mid - 1])
            {
               start = mid + 1;
            }
            else
            {
                  end = mid - 1;
            }
           
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    // int arr[] = {2, 2, 1, 4, 4, 5, 5, 7, 7};
        int arr[] = {2, 2, 4, 4, 5, 5, 7, 7,1};
    int size = 9;
    int indexOftarget = binarySearch(arr, size);
    if (indexOftarget == -1)
    {
        cout << "No target is not present in the array.";
    }
    else
    {
        cout << "Yes target is present in the array & it's index is " << indexOftarget << ".";
    }

    return 0;
}
