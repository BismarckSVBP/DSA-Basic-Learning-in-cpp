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
        if ((arr[mid] == target) && (arr[mid - 1] > target))
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
int main()
{
    int arr[] = {5, 6, 7, 8, 9, 10, 11, 2, 3};
    int size = 9;
    int target = 2;
    int pivotElement = binarySearch(arr, size, target);
    if (pivotElement == -1)
    {
        cout << "No given key element is not present in the array.";
    }
    else
    {
        cout << "Yes pivot element is present in the mid of array & it's index is " << pivotElement << ".";
    }

    return 0;
}
