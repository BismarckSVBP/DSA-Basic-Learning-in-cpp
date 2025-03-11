#include <iostream>
#include <vector>
using namespace std;
int binarySearch(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if ((arr[mid] > arr[mid - 1]) && (arr[mid] > arr[mid + 1]))
        {
            return (arr[mid]);
        }
        else if ((arr[mid] > arr[mid - 1]))
        {

            start = mid + 1;
        }
        else
        {

            end = mid - 1;
        }

        // bhavya code
        //  if ((arr[mid] < arr[mid + 1]))
        //  {
        //      start = mid + 1;
        //  }

        // else
        // {

        //     end = mid;
        // }
        mid = start + (end - start) / 2;
    }
    return arr[start];
}
int main()
{
    int arr[] = {2, 3, 4, 6, 7, 8, 9, 11, 12, 13, 14, 15, 10, 9, 8, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size;
    int target = 0;
    int peakElement = binarySearch(arr, size);
    if (peakElement == -1)
    {
        cout << "No peak element is not present in the array.";
    }
    else
    {
        cout << "Yes peak element is present in the mid of array & it's  " << peakElement << ".";
    }

    return 0;
}
