#include <iostream>
#include <vector>
using namespace std;
int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {

            return mid;
        }
        // else if ((mid - 1) >= 0 && arr[mid - 1] == target)
        // or
        else if ((mid - 1) >= start && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        
        // else if ((mid + 1) <= size-1 && arr[mid + 1] == target)

        // or

        else if ((mid + 1) <= end && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (arr[mid] < target)
        {

            start = mid + 2;
        }
        else
        {

            end = mid - 2;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {3, 2, 4, 5, 6, 8, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 19, 18, 20};
    int size = 19;
    int target = 19;
    int indexOftarget = binarySearch(arr, size, target);
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
