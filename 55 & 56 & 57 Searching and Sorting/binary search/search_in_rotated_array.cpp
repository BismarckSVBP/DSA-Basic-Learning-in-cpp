#include <iostream>
#include <vector>
using namespace std;
int binarySearch(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if ((arr[mid] > arr[mid - 1]) && (arr[mid] > arr[mid + 1]))
        {
            return mid;
        }
        else if ((arr[mid] > arr[mid - 1]))
        {

            start = mid + 1;
        }
        else
        {

            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int binarySearch2(int arr[], int size, int peakElement, int target)
{
    int start;
    int end;
    if (arr[0] <= target)
    {
        start = 0;
        end = peakElement;
    }
    else
    {
        start = peakElement + 1;
        end = size - 1;
    }

    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {

            start = mid + 1;
        }
        else if (arr[mid] > target)
        {

            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {4, 6, 7, 9, 10, 11, 12, 13, 1, 2, 3};
    int size = 10;
    int target = 10;
    int peakElement = binarySearch(arr, size);
    // int search = binarySearch2(arr, size, peakElement, target);
    // if (peakElement == -1 || search == -1)
    // {
    //     cout << "No element is not present in the array.";
    // }
    // else
    // {
    //     cout << "Yes element is present in the of array & it's index is " << search << ".";
    // }
cout << peakElement;
    return 0;
}
