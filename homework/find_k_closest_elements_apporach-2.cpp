#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[start] >= target)
        {
            return start;
        }
        if (arr[end] <= target)
        {
            return end;
        }
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target && arr[mid + 1] > target)
        {
            if (((arr[mid] + arr[mid + 1]) / 2) < target)
            {
                return mid + 1;
            }
            else
            {
                return mid;
            }
        }
        else if (arr[mid] < target && arr[mid + 1] < target)
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
    int arr[] = {12, 16, 22, 30, 35, 36, 37, 43, 49, 50, 53};
    // int arr[] = {1, 2, 3, 4, 5};
    int size = 11;
    int target = 43;
    int k = 4;
    int high = binarySearch(arr, size, target);
    // cout << arr[high] << endl;
    int low = high - 1;
    while (high - low <= k)
    {
        if (target <= arr[0])
        {
            low = 0;
            high++;
        }
        if (target >= arr[size - 1])
        {
            low--;
            high = size - 1;
        }
        if ((arr[high] - target) <= (target - arr[low]))
        {
            high++;
        }
        else
        {
            low--;
        }
    }
    for (int i = low + 1; i < high; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}